#include <stdlib.h>
#include <stdio.h>

char ft_add(unsigned int i, char c)
{
	i++;
	c++;
	return (c);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	if (s)
	{
		while (*s)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}

int main()
{
	char a[] = "abcd";

	printf("ft_strmapi(%s) = '%s'\n", a, ft_strmapi(a, ft_add));
	return (0);
}