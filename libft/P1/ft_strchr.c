/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:02:53 by ankalini          #+#    #+#             */
/*   Updated: 2026/04/28 14:44:08 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char *ft_strchr(const char *s, int c)
{
	char *ptr = (char *)s;
	
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return(ptr);
		ptr++;
	}
	
	if (c == '\0')
	{
		return(ptr);
	}	
	return(NULL);
}

/*
int main(void)
{
    char s[] = "Salut";
    char *result;

    result = ft_strchr(s, 'l');
    if (result)
        printf("trouve : %c\n", *result);
    else
        printf("non trouve\n");

    result = ft_strchr(s, 'z');
    if (result)
        printf("trouve : %c\n", *result);
    else
        printf("non trouve\n");

    result = ft_strchr(s, '\0');
    if (result)
        printf("trouve : \\0\n");
    else
        printf("non trouve\n");
    return(0);
}
*/