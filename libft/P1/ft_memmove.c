


#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;
    
    if (d < s)
    {
		while (n > 0)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
    }
    else
    {
		d = d + n - 1;
		s = s + n - 1;

		while (n > 0)
		{
			*d = *s;
			d--;
			s--;
			n--;
		}
    }
    return (dst);
}