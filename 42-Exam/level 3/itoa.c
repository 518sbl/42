#include <stdlib.h>

char *ft_itoa(int n)
{
    int len = 0;
    int tmp = n;
    int i;
    char *str;

    if (n <= 0)
        len++;
    while (tmp != 0)
    {
        tmp /= 10;
        len++;
    }
    str = malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (n < 0)
        str[0] = '-';
    i = len - 1;
    while (n != 0)
    {
        if (n < 0)
            str[i] = -(n % 10) + '0';
        else
            str[i] = (n % 10) + '0';
        n /= 10;
        i--;
    }
    return (str);
}