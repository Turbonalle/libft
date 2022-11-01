#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    char *a;
    char *b;

    a = (char *)s1;
    b = (char *)s2;

    while (n > 0 && (*a || *b))
    {
        if (*a != *b)
        {
            return (*a - *b);
        }
        a++;
        b++;
        n--;
    }
    return (0);
}

int main()
{
	char *a = "Hello";
	char *b = "He";

	//int n = strlen(a);
	int i = 1;
	int max = 5;

	while (i <= max)
	{
		printf("strncmp(%s, %s, %d) returns: |%d|\n", a, b, i, strncmp(a, b, i));
		i++;
	}

	printf("\n");
	
	i = 1;
	while (i <= max)
	{
		printf("ft_strncmp(%s, %s, %d) returns: |%d|\n", a, b, i, ft_strncmp(a, b, i));
		i++;
	}

	printf("\n");

	printf("strcmp(%s, %s) returns: |%d|\n", a, b, strcmp(a, b));

	return (0);
}