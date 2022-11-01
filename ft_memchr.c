#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t	i;

	str = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (0);
}

int main()
{
	char s[] = "Hello my friend!";
	int c = 'f';
	size_t n = 10;

	printf("   memchr(%s, %d, %zu) = '%p'\n", s, c, n, memchr(s, c, n));
	printf("ft_memchr(%s, %d, %zu) = '%p'\n", s, c, n, ft_memchr(s, c, n));

	return (0);
}