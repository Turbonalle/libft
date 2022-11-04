#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd)
{
    int i = 0;
    while (s[i] != '\0')
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}

void ft_putnbr_fd(int n, int fd)
{
	char *min;
	
	min = "-2147483648";
	if (n == -2147483648)
	{
		ft_putstr_fd(min, fd);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

int main()
{
	int test = -2147483648;
	int fd = 1;

	ft_putnbr_fd(test, fd);
	ft_putchar_fd('\n', fd);
	return (0);
}