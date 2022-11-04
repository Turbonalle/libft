#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *joined_str;
	size_t i;

	joined_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!joined_str)
		return (NULL);
	i = 0;
	while (*s1)
		joined_str[i++] = *s1++;
	while (*s2)
		joined_str[i++] = *s2++;
	joined_str[i] = 0;
	return (joined_str);
}

int main()
{
	char a[] = "Hello sir.";
	char b[] = "How are you doing?";

	printf("ft_strjoin(%s, %s) = '%s'\n", a, b, ft_strjoin(a, b));
	
	return (0);
}