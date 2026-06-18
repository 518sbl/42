#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n > 9)
        ft_putnbr(n / 10);
    ft_putchar((n % 10) + '0');
}

void fizzbuzz(void)
{
    int count;

    count = 1;
    while (count <= 100)
    {
        if (count % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (count % 3 == 0)
            write(1, "fizz", 4);
        else if (count % 5 == 0)
            write(1, "buzz", 4);
        else
        {
            ft_putnbr(count);
        }
        ft_putchar('\n');
        count++;
    }
}

int main(void)
{
    fizzbuzz();
    return(0);
}
