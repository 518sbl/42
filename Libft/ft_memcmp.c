/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:30:42 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/05 12:29:20 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptrd;
	size_t			i;

	ptr = (unsigned char *)s1;
	ptrd = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr[i] != ptrd[i])
			return (ptr[i] - ptrd[i]);
		i++;
	}
	return (0);
}
