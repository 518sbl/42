#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *s1;
    char *s2;

    if (ac == 3)
    {
        s1 = av[1];
        s2 = av[2];
        while (s1[i])
        {
            j = 0;
            while (s2[j])
            {
                k = 0;
                if (s1[i] == s2[j])
                {
                    while (s1[k] != s1[i])
                        k++;
                    if (k == i)
                    {
                        k = 0;
                        while (s2[k] != s2[j])
                            k++;
                        if (k == j)
                            write(1, &s1[i], 1);
                    }
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
