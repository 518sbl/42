/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:44:29 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/02 19:57:41 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *last = NULL;
	char *ptr = (char *)s;
	
	while (*ptr != '\0')
	{
		if (*ptr == c)
			last = ptr;
		ptr++;
	}
	if (c == '\0')
	{
		return(ptr);
	}
	return (last);
}

/*
int main(void)
{
    char s[] = "cava";
    char *result;

    result = ft_strrchr(s, 'a');
    if (result)
        printf("trouve : %c\n", *result); 
    else
        printf("non trouve\n");

    result = ft_strrchr(s, 'z');
    if (result)
        printf("trouve : %c\n", *result);
    else
        printf("non trouve\n");

    result = ft_strrchr(s, '\0');
    if (result)
        printf("trouve : \\0\n");
    else
        printf("non trouve\n");
    return(0);
}
*/