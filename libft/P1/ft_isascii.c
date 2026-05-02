/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:52:38 by ankalini          #+#    #+#             */
/*   Updated: 2026/04/22 16:52:38 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return	(1);
	else
		return	(0);
}

/*
int	main(void)
{
	printf("%d\n", ft_isascii(60));   // doit afficher 1
	printf("%d\n", ft_isascii(127));  // doit afficher 1
    printf("%d\n", ft_isascii(0));    // doit afficher 1
    printf("%d\n", ft_isascii(-1));   // doit afficher 0
    printf("%d\n", ft_isascii(128));  // doit afficher 0
    return (0);
}
*/