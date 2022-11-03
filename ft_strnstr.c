#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *p1;
	char *p2;
	size_t i;

	p1 = (char *)haystack;
	p2 = (char *)needle;

	if (!needle || !len)
	{
		return(p1);
	}
	i = 0;
	while (p1 && len > 0)
	{
		while (p1[i] == *p2)
		{
			i++;
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
	char haystack[] = "abcdefg";
	char needle[] = "def";
	int len = 10;

	while (len > 0)
	{
		printf("strnstr(%s, %s, %d) = '%s'\n", haystack, needle, len, ft_strnstr(haystack, needle, len));
		len--;
	}
	return (0);
}