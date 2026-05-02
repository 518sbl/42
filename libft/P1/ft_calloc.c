

/*
#include <stdio.h>
#include <stdlib.h>
*/

void	ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return(NULL);
	}
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}