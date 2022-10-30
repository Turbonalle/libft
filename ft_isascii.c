#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
    return (0 <= c && c <= 127);
}

int main()
{
    int c = 'a';
    int i = 7;
    int x = ' ';

    i++;

    printf("ft_isascii(%d) = %d\n", c, ft_isascii(c));
    printf("ft_isascii(%d) = %d\n", i, ft_isascii(i));
    printf("ft_isascii(%d) = %d\n", x, ft_isascii(x));

    printf("isascii(%d) = %d\n", c, isascii(c));
    printf("isascii(%d) = %d\n", i, isascii(i));
    printf("isascii(%d) = %d\n", x, isascii(x));
}