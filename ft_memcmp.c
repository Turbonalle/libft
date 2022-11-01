#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t	i;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	i = 0;
	while (i < n && str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
		{
			if (str1[i] - str2[i] > 0)
			{
				return (1);
			}
			return (-1);
		}
		i++;
	}
	return (0);
}

int main()
{
	char s1[] = "Hello my friend!";
	char s2[] = "Hello by friend!";
	size_t n = 3;

	printf("   memcmp(%s, %s, %zu) = '%d'\n", s1, s2, n, memcmp(s1, s2, n));
	printf("ft_memcmp(%s, %s, %zu) = '%d'\n", s1, s2, n, ft_memcmp(s1, s2, n));

	return (0);
}