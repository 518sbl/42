

/*
#include <stdio.h>
#include <stdlib.h>
*/

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len = ft_strlen(src);

	if (size == 0)
		return (len);
	
	while (*src != '\0' && size - 1 > 0)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	*dst = '\0';
	return (len);
}