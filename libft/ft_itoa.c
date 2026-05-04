/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:36:30 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/04 18:47:11 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_numbers(int n)
{
	int	numbers;

	numbers = 0;
	if (n <= 0)
		numbers = 1;
	while (n != 0)
	{
		n /= 10;
		numbers++;
	}
	return (numbers);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	int		neg;
	char	*result;

	nb = (long)n;
	neg = (nb < 0);
	if (!neg)
		nb = -nb;
	len = count_numbers(n);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (neg)
		result[0] = '-';
	while (len-- > neg)
	{
		result[len] = '0' - (nb % 10);
		nb /= 10;
	}
	return (result);
}
