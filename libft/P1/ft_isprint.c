/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 20:19:14 by ankalini          #+#    #+#             */
/*   Updated: 2026/04/22 20:19:14 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
int main(void)
{
	printf("%d\n", ft_isprint('a'));	//doit afficher 1
	printf("%d\n", ft_isprint('\\'));	//doit afficher 1
	printf("%d\n", ft_isprint(' '));	//doit afficher 1
	printf("%d\n", ft_isprint(127));	//doit afficher 0
	printf("%d\n", ft_isprint(31));		//doit afficher 0
	printf("%d\n", ft_isprint('\n'));	//doit afficher 0
	return(0);
}
*/