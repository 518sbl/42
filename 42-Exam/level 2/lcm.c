int pgcd(int a, int b)
{
    int tmp;

    while (b)
    {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return (a);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return (0);
    return (a / pgcd(a, b) * b);
}