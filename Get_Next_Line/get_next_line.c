/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankalini <ankalini@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 12:06:29 by ankalini          #+#    #+#             */
/*   Updated: 2026/05/15 13:21:51 by ankalini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_and_store(int fd, char *stock)
{
	char	*buf;
	int		bytes_read;
	char	*result;

	bytes_read = 1;
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	if (!stock)
		stock = ft_strjoin("", "");
	if (!stock)
		return (free(buf), NULL);
	while (!ft_strchr(stock, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(stock), free(buf), NULL);
		buf[bytes_read] = '\0';
		result = ft_strjoin(stock, buf);
		free (stock);
		stock = result;
	}
	free (buf);
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
	{
		free(stock);
		stock = NULL;
		return (NULL);
	}
	result = extract_line(stock);
	stock = clean_stock(stock);
	return (result);
}
