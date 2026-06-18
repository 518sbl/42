int ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    int digit;
    char c;

    if (str_base < 2 || str_base > 16)
        return (0);
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i])
    {
        c = str[i];
        if (c >= 'A' && c <= 'F')
            c += 32;
        if (c >= '0' && c <= '9')
            digit = c - '0';
        else if (c >= 'a' && c <= 'f')
            digit = c - 'a' + 10;
        else
            break;
        if (digit >= str_base)
            break;
        res = res * str_base + digit;
        i++;
    }
    return (res * sign);
}