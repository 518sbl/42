/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:30:42 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/04 18:16:45 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptrd;

	ptr = (unsigned char *)s1;
	ptrd = (unsigned char *)s2;
	while (n > 0)
	{
		if (*ptr != *ptrd)
			return (*ptr - *ptrd);
		ptr++;
		ptrd++;
		n--;
	}
	return (0);
}
