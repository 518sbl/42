#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *srrc;
    int i = 0;

    srrc = malloc(strlen(src) + 1);
    while (src[i])
    {
        srrc[i] = src[i];
        i++;
    }
    srrc[i] = '\0';
    return (srrc);
}