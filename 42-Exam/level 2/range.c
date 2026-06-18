#include <stdlib.h>

int *ft_range(int start, int end)
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
        res[i] = start;
        if (start < end)
            start++;
        else
            start--;
        i++;
    }
    return (res);
}