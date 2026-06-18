#include <unistd.h>

int ft_atoi(char *str)
{
    int n = 0;

    while (*str >= '0' && *str <= '9')
    {
        n *= 10;
        n += *str - '0';
        ++str;
    }
    return (n);
}

void print_hex(int n)
{
    char tmp[] = "0123456789abcdef";

    if (n >= 16)
        print_hex(n / 16);
    write(1, &tmp[n % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
    return (0);
}