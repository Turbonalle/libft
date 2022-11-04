#include <stdio.h>
#include <string.h>

/*
	The memcmp() function compares byte string "s1" against byte string "s2".  Both strings are assumed to be "n" bytes long.

	The memcmp() function returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes (treated as unsigned char values, so that `\200' is greater than `\0', for example).  Zero-length strings are always identical.  This behavior is not required by C and portable code should only depend on the sign of the returned value.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

int main()
{
	char s1[] = "Hello my friend!";
	char s2[] = "Hello by friend!";
	size_t n = 16;

	printf("   memcmp(%s, %s, %zu) = '%d'\n", s1, s2, n, memcmp(s1, s2, n));
	printf("ft_memcmp(%s, %s, %zu) = '%d'\n", s1, s2, n, ft_memcmp(s1, s2, n));

	return (0);
}