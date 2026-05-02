
#include <stddef.h>
int is_in_set(char c, char const *set)
{
while (*set)
{
	if (*set == c)
	return (1);
	set++;
}
return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *result;
	size_t start = 0;
	size_t end = ft_strlen(s1);
	result = malloc(strlen(s1) + 1);
	if (!result)
    {
		return(NULL);
    }
	while (s1[start] && is_in_set(s1[start], set))
    {
		start++;
    }
	while (end > start && is_in_set(s1[end - 1], set))
    {
		end--;
    }
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}