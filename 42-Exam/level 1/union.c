#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int check(int c, char *str, int index)
{
    int i = 0;

    while (i < index)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 3)
    {
        while (av[1][i])
        {
            if (check(av[1][i], av[1], i))
                write(1, &av[1][i], 1);
            i++;
        }
        i = 0;
        while (av[2][i])
        {
            if (check(av[2][i], av[1], ft_strlen(av[1])) && check(av[2][i], av[2], i))
                write(1, &av[2][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}