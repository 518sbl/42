/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:08:01 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/21 14:41:21 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_put_unsigned(unsigned int n)
{
	char	c;

	if (n >= 10)
		ft_put_unsigned(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_print_unsigned(unsigned int n)
{
	ft_put_unsigned(n);
	return (ft_len_unsigned(n));
}
