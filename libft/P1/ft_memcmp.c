/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:30:42 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/02 19:56:05 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *ptr = (char *)s1;
	char *ptrd = (char *)s2;
	
	while (n > 0)
	{
	if (*ptr == *ptrd)
	{
		ptr++;
		ptrd++;
		n--;
	}
	else if(*ptr > *ptrd)
	{
		return(*ptr - *ptrd);
	}
	else
		return(*ptr - *ptrd);
	}
	return(0);
}

/*
int main(void)
{
    char s1[] = "Salut";
    char s2[] = "Salut";
    char s3[] = "Zalut";

    printf("%d\n", ft_memcmp(s1, s2, 5));  // 0  (identiques)
    printf("%d\n", ft_memcmp(s1, s3, 5));  // negatif (S < Z)
    printf("%d\n", ft_memcmp(s3, s1, 5));  // positif (Z > S)
    return(0);
}
*/