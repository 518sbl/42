#include <unistd.h>

int	word_len(char *str)
{
	int len = 0;

	while (str[len] && str[len] != ' ' && str[len] != '\t')
		len++;
	return (len);
}

int main(int ac, char **av)
{
    int i;
    int fw_start;
    int fw_len;
    int j;
    int len;
    int first;

    if (ac >= 2)
    {
        i = 0;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        fw_start = i;
        fw_len = word_len(av[1] + i);
        j = fw_start + fw_len;
        first = 1;
        while (av[1][j])
        {
            while (av[1][j] == ' ' || av[1][j] == '\t')
                j++;
            len = word_len(av[1] + j);
            if (len == 0)
                break;
            if (first == 0)
                write(1, " ", 1);
            first = 0;
            write(1, &av[1][j], len);
            j = j + len;
        }
        if (fw_len > 0)
        {
            if (first == 0)
                write(1, " ", 1);
            write(1, &av[1][fw_start], fw_len);
        }
    }
    write(1, "\n", 1);
    return (0);
}