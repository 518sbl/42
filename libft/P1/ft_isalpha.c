/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:40:21 by ankalini          #+#    #+#             */
/*   Updated: 2026/04/22 19:40:21 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return(1);
	else
		return(0);
}
/*
int main(void)
{
	printf("%d\n", ft_isalpha('a')); //doit afficher 1
	printf("%d\n", ft_isalpha('5')); //doit afficher 0
	printf("%d\n", ft_isalpha('K')); //doit afficher 1
	return(0);
}
*/