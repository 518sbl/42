/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:17:51 by ankalini          #+#    #+#             */
/*   Updated: 2026/04/28 13:18:20 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stddef.h>
*/

void *ft_memset(void *s, int c, size_t n)
{
    char *ptr = (char *)s;
    while(n > 0)
    {
        *ptr = c;
        ptr++;
        n--;
    }
    return (s);
}

/*
int main(void)
{
    char tab[6] = "Salut";
    printf("avant : %s\n", tab);
    ft_memset(tab, 'X', 5);
    printf("apres : %s\n", tab);
    return(0);
}
*/