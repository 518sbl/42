
char *ft_strjoin(char const *s1, char const *s2)
{
    char    *result;
    int     i;
    int     j;

    i = 0;
    j = 0;
    result = malloc(strlen(s1) + strlen(s2) + 1);
    if (!result)
        return (NULL);
    while (s1[i] != '\0')
    {
        result[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        result[i + j] = s2[j];
        j++;
    }
    result[i + j] = '\0';
    return (result);
}