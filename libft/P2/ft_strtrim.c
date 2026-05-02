/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:58:58 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/02 19:59:08 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_in_set(char c, char const *set)
{
while (*set)
{
	if (*set == c)
	return (1);
	set++;
}
return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *result;
	size_t start = 0;
	size_t end = ft_strlen(s1);
	result = malloc(strlen(s1) + 1);
	if (!result)
    {
		return(NULL);
    }
	while (s1[start] && is_in_set(s1[start], set))
    {
		start++;
    }
	while (end > start && is_in_set(s1[end - 1], set))
    {
		end--;
    }
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}