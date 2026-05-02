void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i =0;
	if (s == NULL)
	{
		return;
	}
	while (*s != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}