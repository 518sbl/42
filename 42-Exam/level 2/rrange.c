#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int size;
    int *res;
    int i = 0;

    if (start <= end)
        size = end - start + 1;
    else
        size = start - end + 1;
    res = malloc(size * sizeof(int));
    if (!res)
        return (NULL);
    while (i < size)
    {
        res[i] = end;
        if (end < start)
            end++;
        else
            end--;
        i++;
    }
    return (res);
}