/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:00:25 by ankalini          #+#    #+#             */
/*   Updated: 2026/04/22 18:00:25 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_isdigit('5'));	//doit afficher 1
	printf("%d\n", ft_isdigit('a'));	//doit afficher 0
	return(0);
}
*/