#include <unistd.h>

int	word_len(char *str)
{
	int len = 0;

	while (str[len] && str[len] != ' ' && str[len] != '\t')
		len++;
	return (len);
}

void	expand_str(char *str)
{
	int len;
	int i;
	int first_word = 1;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		len = word_len(str + i);
		if (len == 0)
			break;
		if (first_word == 0)
			write(1, "   ", 3);
		first_word = 0;
		write(1, &str[i], len);
		i = i + len;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		expand_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
