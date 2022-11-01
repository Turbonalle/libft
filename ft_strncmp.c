#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char *a;
	char *b;

	a = (char *)s1;
	b = (char *)s2;

	while (n > 0)
	{
		if (!*a || !*b)
		{
			return (0);
		}
		if (*a != *b)
		{
			return (*a - *b);
		}
		n--;
	}
	return (0);
}

int main()
{
	char *a = "Hello";
	char *b = "He";

	int n = strlen(a);
	int i = 1;
	int max = 5;

	while (i <= max)
	{
		printf("strncmp(a, b, %d) returns: |%d|\n", i, strncmp(a, b, i));
		i++;
	}

	printf("\n");

	printf("strcmp(a, b) returns: |%d|\n", strcmp(a, b));

	return (0);
}