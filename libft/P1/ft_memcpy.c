/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:18:35 by ankalini          #+#    #+#             */
/*   Updated: 2026/04/29 16:51:10 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stddef.h>
*/

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *ptr = (char *)src;
    char *ptrd = (char *)dest;
    char *start = ptrd;
    while(n > 0)
    {
        *ptrd = *ptr;
        ptr++;
        ptrd++;
        n--;
    }
    return(start);
}
/*
int main(void)
{
    char src[6] = "Salut";
    char dest[6];
    
    ft_memcpy(dest, src, 6);
    printf("src  : %s\n", src);
    printf("dest : %s\n", dest);
    return(0);
}
*/
