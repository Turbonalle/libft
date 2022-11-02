#include <unistd.h>

size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

// void ft_putendl_fd(char *s, int fd)
// {
// 	const char	c = '\n';
// 	while (*s)
// 	{
// 		write(fd, s, 1);
// 		s++;
// 	}
// 	write(fd, &c, 1);
// }

void ft_putendl_fd(char *s, int fd)
{
	const char	c = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &c, 1);
}

int main()
{
	char s[] = "Hello! Can you see this?";

	ft_putendl_fd(s, 1);
	return (0);
}