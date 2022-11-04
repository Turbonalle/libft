#include <string.h>
#include <stdio.h>

static size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strrchr(const char *s, int c)
{
	int len;
	char *ptr;
	
	len = ft_strlen(s);
	ptr = (char *)s + len;
	while (len >= 0)
	{
		if (*ptr == (unsigned char)c)
		{
			return (ptr);
		}
		ptr--;
		len--;
	}
	if (c == 0)
	{
		return (ptr);
	}

	return (NULL);
}

int main()
{
	char *str = "Bananas are for hungry monkeys!";
	char c = 'r';

	printf("|%s|\n", ft_strrchr(str, c));
	printf("|%s|\n", strchr(str, c));

	return (0);
}