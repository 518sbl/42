#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int end;
    int start;

    if (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;
        while (i >= 0)
        {
            end = i;
            while (i >= 0 && av[1][i] != ' ')
                i--;
            start = i + 1;
            write(1, &av[1][start], end - start + 1);
            if (i >= 0)
                write(1, " ", 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}