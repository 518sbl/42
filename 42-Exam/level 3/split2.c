#include <stdlib.h>

int	word_count(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i])
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\v' || s[i] == '\n')
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\v' && s[i] != '\n')
			i++;
	}
	return (count);
}

int	word_len(char *s)
{
	int len = 0;

	while (s[len] && s[len] != ' ' && s[len] != '\t' && s[len] != '\v' && s[len] != '\n')
		len++;
	return (len);
}

char **ft_split(char *s)
{
    char **res;
    int i = 0;
    int j = 0;
    int k;
    int len;

    res = malloc(sizeof(char *) * (word_count(s) + 1));
    if (!res)
        return (NULL);
    while (s[i])
    {
        while (s[i] == ' ' || s[i] == '\t' || s[i] == '\v' || s[i] == '\n')
            i++;
        if (s[i])
        {
            len = word_len(s + i);
            res[j] = malloc(len + 1);
            if (!res[j])
                return (NULL);
            k = 0;
            while (k < len)
            {
                res[j][k] = s[i];
                k++;
                i++;
            }
            res[j][k] = '\0';
            j++;
        }
    }
    res[j] = NULL;
    return (res);
}