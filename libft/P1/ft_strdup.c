/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:43:23 by ankalini          #+#    #+#             */
/*   Updated: 2026/04/29 13:37:04 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
*/


char *ft_strdup(const char *s)
{
	int c = 0;
	int len = ft_strlen(s);
	char *m = malloc(len + 1);

	while (*s != '\0')
	{
		m[c] = s[c];
		c++;
		s++;
	}
	m[c] = '\0';
	return(m);
}