#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	The strstr() function locates the first occurrence of the null-terminated string "needle" in the null-terminated string "haystack".

	Returns:
		- "haystack",	if "needle" is an empty string,
		- NULL,			if needle occurs nowhere in haystack,
		- otherwise a pointer to the first character of the first occurrence of "needle" is returned.
*/

size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *p1;
	char *p2;
	size_t i;

	p1 = (char *)haystack;
	p2 = (char *)needle;

	if (strlen(needle) == 0)
		return (p1);

	// if (!needle)
	// 	return(p1);
	if (!len)
		return(p1);
	i = 0;
	while (p1 && len > 0)
	{
		while (*p1 == *p2)
		{
			p2++;
			if (*p2 == '\0')
				return (p1);
		}
			p1++;
		len--;
	}
	return (0);
}

int main()
{
	char *haystack = "see FF your FF return FF now FF";
	char *needle = "";
	int max = strlen(haystack);
	int len;

	len = max;

	printf("ft_strnstr(%s, %s, %d) = '%s'\n", haystack, needle, len, ft_strnstr(haystack, needle, len));
	// while (len >= 0)
	// {
	printf("strnstr(%s, %s, %d)    = '%s'\n", haystack, needle, len, strnstr(haystack, needle, len));
	// 	len--;
	// }
	// printf("\n");
	// len = max;
	// while (len >= 0)
	// {
	// 	printf("ft_strnstr(%s, %s, %d) = '%s'\n", haystack, needle, len, ft_strnstr(haystack, needle, len));
	// 	len--;
	// }
	return (0);
}