/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:27:23 by ankalini          #+#    #+#             */
/*   Updated: 2026/04/29 14:16:50 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\f' || *str == '\v')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
		}
		str++;
	}
	return (result * sign);
}

/*
int main(void)
{
    printf("%d\n", ft_atoi("42"));       // 42
    printf("%d\n", ft_atoi("-42"));      // -42
    printf("%d\n", ft_atoi("   42"));    // 42
    printf("%d\n", ft_atoi("+42"));      // 42
    printf("%d\n", ft_atoi("42abc"));    // 42
    printf("%d\n", ft_atoi("abc"));      // 0
    return(0);
}
*/