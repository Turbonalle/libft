#include <stdlib.h>
#include <stdio.h>

static int	ft_check_int_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	len++;
	return (len);
}

static char *ft_int_min(int n)
{
	char	*str;
	
	str = (char *)malloc(sizeof(char) * 12);
	str = "-2147483648";
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
	{
		str = ft_int_min(n);
		return (str);
	}
	len = ft_check_int_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!n || !str)
		return (0);
	str[len--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[len--] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}


int main()
{
	int n = -2147483648;

	printf("ft_itoa(%d) = '%s'\n", n, ft_itoa(n));
	return (0);
}