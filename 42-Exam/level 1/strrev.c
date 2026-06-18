char *ft_strrev(char *str)
{
    int i = 0;
    int mid = 0;
    char tmp;

    while (str[mid])
        mid++;
    while (i < mid / 2)
    {
        tmp = str[i];
        str[i] = str[mid - 1 - i];
        str[mid - 1 - i] = tmp;
        i++;
    }
    return (str);
}