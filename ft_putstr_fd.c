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

int main()
{
    char c = 'a';
    char str[10] = "Hello!";
    int fd = 1;

    ft_putchar_fd(c, fd);
    ft_putchar_fd('\n', fd);
    ft_putstr_fd(str, fd);
    ft_putchar_fd('\n', fd);

    return (0);
}