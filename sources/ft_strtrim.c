#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strchr(const char *s, int c)
{
	char *ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	if (c == 0)
		return (ptr);
	return (NULL);
}


size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}


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


char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	if (i == 0)
		return (ft_substr(s1, 0, i + 1));
	while (1 && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}


int main()
{
	printf("----STRTRIM TEST----\n");
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *set1 = " \n\t";
	printf("'%s'\n", ft_strtrim(s1, set1));

	char *s2 = "\t   \n\n\n  \n\n\t    Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ";
	char *set2 = " \n\t";
	printf("'%s'\n", ft_strtrim(s2, set2));

	char *s3 = "aeeaHello! Please trim me!eaee";
	char *set3 = "abcdefghijk";
	printf("'%s'\n", ft_strtrim(s3, set3));
	return (0);
}