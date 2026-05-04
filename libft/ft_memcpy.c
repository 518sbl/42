/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:18:35 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/04 17:25:32 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr;
	char	*ptrd;
	char	*start;

	ptr = (char *)src;
	ptrd = (char *)dest;
	start = ptrd;
	while (n > 0)
	{
		*ptrd = *ptr;
		ptr++;
		ptrd++;
		n--;
	}
	return (start);
}
