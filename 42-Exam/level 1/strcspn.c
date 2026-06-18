size_t ft_strcspn(char *s, char *reject)
{
    size_t i = 0;
    size_t j = 0;

    while (s[i])
    {
        while (reject[j])
        {
            if (reject[j] == s[i])
                return (i);
            j++;
        }
        j = 0;
        i++;
    }
    return (i);
}
