/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:43:04 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/21 14:00:48 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_hex(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}

static void	ft_put_hex(unsigned int n, int upper)
{
	char	*base;

	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		ft_put_hex(n / 16, upper);
	write(1, &base[n % 16], 1);
}

int	ft_print_hex(unsigned int n, int upper)
{
	ft_put_hex(n, upper);
	return (ft_len_hex(n));
}
