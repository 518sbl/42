/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:43:23 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/04 17:53:14 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*m;

	i = 0;
	m = malloc(ft_strlen(s) + 1);
	if (!m)
		return (NULL);
	while (s[i] != '\0')
	{
		m[i] = s[i];
		i++;
	}
	m[i] = '\0';
	return (m);
}
