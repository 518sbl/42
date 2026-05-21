/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:30:48 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/21 14:33:33 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_format(char spec, va_list args)
{
	if (spec == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (spec == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (spec == 'd' || spec == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (spec == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long)));
	else if (spec == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (spec == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	else if (spec == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	else if (spec == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			count += ft_handle_format(*format, args);
		}
		else
			count += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (count);
}
