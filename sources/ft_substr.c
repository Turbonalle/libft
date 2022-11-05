#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substring;
	size_t i;

	if (!(substring = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ft_strlcpy(substring, "", len);
		return (substring);
	}
	i = 0;
	while (s[start] && len > 0)
	{
		substring[i++] = s[start++];
		len--;
	}
	substring[i] = '\0';
	return (substring);
}

int main()
{
	char str[] = "Hello mister!";
	unsigned int start = 6;
	size_t len = 12;

	printf("ft_substr(str, %u, %zu) = '%s'\n", start, len, ft_substr(str, start, len));
	return (0);
}