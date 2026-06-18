#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int n;
    int i = 2;

    if (ac == 2)
    {
        n = atoi(av[1]);
        if (n == 1)
            printf("1");
        while (n > 1)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                n /= i;
                if (n > 1)
                    printf("*");
            }
            else
                i++;
        }
    }
    printf("\n");
    return (0);
}