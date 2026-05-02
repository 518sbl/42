/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:56:19 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/02 19:56:24 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;
    
    if (d < s)
    {
		while (n > 0)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
    }
    else
    {
		d = d + n - 1;
		s = s + n - 1;

		while (n > 0)
		{
			*d = *s;
			d--;
			s--;
			n--;
		}
    }
    return (dst);
}