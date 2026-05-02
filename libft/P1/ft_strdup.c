/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:43:23 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/02 19:56:39 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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