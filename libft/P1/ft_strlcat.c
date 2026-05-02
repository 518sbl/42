/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:56:45 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/02 19:56:49 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  src_len;
    size_t  dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);

    if (size <= dst_len)
        return (size + src_len);

    while (*dst != '\0')
        dst++;

    while (*src != '\0' && dst_len + 1 < size)
    {
        *dst = *src;
        dst++;
        src++;
        dst_len++;
    }
    *dst = '\0';

    return (dst_len + src_len);
}