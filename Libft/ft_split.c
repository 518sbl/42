/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 12:36:02 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/04 16:38:54 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	count;
	int	w;

	count = 0;
	w = 0;
	while (*s)
	{
		if (*s != c && !w)
		{
			w = 1;
			count++;
		}
		else if (*s == c)
			w = 0;
		s++;
	}
	return (count);
}

static char	*extract_word(const char *s, int len)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_split(char **tab, int i)
{
	while (i > 0)
	{
		i--;
		free(tab[i]);
	}
	free(tab);
}

static int	fill_word(char const **s, char **tab, int i, char c)
{
	int	len;

	while (**s == c)
		(*s)++;
	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	tab[i] = extract_word(*s, len);
	if (!tab[i])
		return (0);
	*s += len;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb_word;
	int		i;

	if (!s)
		return (0);
	nb_word = word_count(s, c);
	tab = malloc(sizeof(char *) * (nb_word + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < nb_word)
	{
		if (!fill_word(&s, tab, i, c))
			return (free_split(tab, i), NULL);
		i++;
	}
	tab[nb_word] = NULL;
	return (tab);
}
