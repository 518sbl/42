#include <stdlib.h>

char **ft_split(char *s)
{
    char **res;
    int i = 0;
    int j = 0;
    int k;

    res = malloc(sizeof(char *) * 10000);
    while(s[i])
    {
        while(s[i] == ' ' || s[i] == '\t' || s[i] == '\v' || s[i] == '\n')
            i++;
        if (s[i])
        {
            res[j] = malloc(10000);
            k = 0;
            while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\v' && s[i] != '\n')
                res[j][k++] = s[i++];
            res[j++][k] = 0;
        }
    }
    res[j] = NULL;
    return (res);
}