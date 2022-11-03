#include <stdlib.h>
#include <stdio.h>

char ft_add(unsigned int i, char c)
{
	i++;
	c++;
	return (c);
}

size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new;
	size_t i;
	
	if (!s)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

int main()
{
	char a[] = "abcd";

	printf("ft_strmapi(%s) = '%s'\n", a, ft_strmapi(a, ft_add));
	return (0);
}