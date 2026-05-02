/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:26:46 by ankalini          #+#    #+#             */
/*   Updated: 2026/04/27 13:26:46 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stddef.h>
#include <stdio.h>
*/

void ft_bzero(void *s, size_t n)
{
    char *ptr = (char *)s;
    while (n > 0)
    {
        *ptr = 0;
        ptr++;
        n--;
    }
}

/*
int main(void)
{
    char tab[5] = "Salut";
    printf("avant : %s\n", tab);
    ft_bzero(tab, 5);
    printf("apres : %s\n", tab);
    return(0);
}
*/