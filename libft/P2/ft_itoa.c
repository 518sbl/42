/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:36:30 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/02 19:55:24 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_numbers(int n)
{
	int numbers = 0;
	if (n <= 0)
		numbers = 1;
	while (n != 0)
	{
		n /= 10;
		numbers++;
	}
	return(numbers);
}

char *ft_itoa(int n)
{
	long nb = n;
	int numbers = count_numbers(n);
	char *result = malloc(numbers + 1);
	int sign = 0;

	if (!result )
		return (NULL);
	result[numbers] = '\0';
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
	}
	while (numbers > sign)
	{
		numbers--;
		result[numbers] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign)
		result[0] = '-';
	return (result);
}