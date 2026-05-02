char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i = 0;
	if (s == NULL)
	{
		return;
	}
	char *result = malloc(strlen(s) + 1);
	while (*s != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}