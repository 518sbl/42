#include <unistd.h>

void last_word(char *str)
{
    int i = 0;
    int j;

    while (str[i])
        i++;
    while (i > 0 && str[i - 1] == ' ')
        i--;
    j = i;
    while (j > 0 && str[j - 1] != ' ')
        j--;
    while (j < i)
    {
        write(1, &str[j], 1);
        j++;
    }
}

int main(int ac , char **av)
{
    if (ac == 2)
        last_word(av[1]);
    write(1, "\n", 1);
    return (0);
}