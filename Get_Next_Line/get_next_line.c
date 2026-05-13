/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 12:06:29 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/13 13:18:37 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_and_store(int fd, char *stock)
{
	char	buf[BUFFER_SIZE + 1];
	int		bytes_read;
	char	*result;

	bytes_read = 1;
	if (!stock)
		stock = ft_strjoin("", "");
	while (!ft_strchr(stock, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read < 0)
			return (NULL);
		buf[bytes_read] = '\0';
		result = ft_strjoin(stock, buf);
		free(stock);
		stock = result;
		if (stock && stock[0] == '\0')
		{
			free (stock);
			return (NULL);
		}
	}
	return (stock);
}

static char	*extract_line(char *stock)
{
	size_t	len;
	char	*result;

	if (!ft_strchr(stock, '\n'))
		return (ft_substr(stock, 0, ft_strlen(stock)));
	len = ft_strchr(stock, '\n') - stock + 1;
	result = ft_substr(stock, 0, len);
	return (result);
}

static char	*clean_stock(char *stock)
{
	size_t	len;
	size_t	start;
	char	*result;

	if (!ft_strchr(stock, '\n'))
	{
		free(stock);
		return (NULL);
	}
	start = ft_strchr(stock, '\n') - stock + 1;
	len = ft_strlen(stock) - start;
	result = ft_substr(stock, start, len);
	free(stock);
	return (result);
}

char	*get_next_line(int fd)
{
	static char	*stock;
	char		*result;

	if (fd < 0)
		return (NULL);
	stock = read_and_store(fd, stock);
	if (!stock || stock[0] == '\0')
		return (NULL);
	result = extract_line(stock);
	stock = clean_stock(stock);
	return (result);
}
