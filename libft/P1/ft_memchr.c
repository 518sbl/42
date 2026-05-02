/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:24:28 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/02 19:56:02 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    char *ptr = (char *)s;
    while(n > 0)
    {
        if (*ptr == c)
        {
            return(ptr);
        }
        
        else
        {
            ptr++;
            n--;
        }
    }
    return(NULL);
}

/*
int main(void)
{
    char s[6] = "Salut";
    char *result;

    result = ft_memchr(s, 'l', 5);
    if (result)
        printf("trouve : %c\n", *result);
    else
        printf("non trouve\n");

    result = ft_memchr(s, 'z', 5);
    if (result)
        printf("trouve : %c\n", *result);
    else
        printf("non trouve\n");
    return(0);
}
*/