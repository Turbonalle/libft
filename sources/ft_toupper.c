#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
    }
    return (c);
}

int main()
{
    int a = 'a';
    int b = 'B';
    int c = ' ';
    int d = '4';
    printf("%d\n", toupper(a) == ft_toupper(a));
    printf("%d\n", toupper(b) == ft_toupper(b));
    printf("%d\n", toupper(c) == ft_toupper(c));
    printf("%d\n", toupper(d) == ft_toupper(d));
    printf("%c\n", ft_toupper(a));
    printf("%c\n", ft_toupper(b));
    printf("%c\n", ft_toupper(c));
    printf("%c\n", ft_toupper(d));
    return (0);
}