/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 23:42:26 by ankalini          #+#    #+#             */
/*   Updated: 2026/04/22 23:42:26 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stddef.h>
#include <stdio.h>
*/

size_t ft_strlen(const char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return(c);
}

/*
int	main(void)
{
	printf("%ld\n", ft_strlen("Salut"));
	printf("%ld\n", ft_strlen("How are you today"));
}
*/