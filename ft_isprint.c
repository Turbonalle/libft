#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
    return (32 <= c && c <= 126);
}

int main()
{
    int c = 'a';
    int i = 78;
    int x = 'Z';

    i++;

    printf("ft_isprint(%d) = %d\n", c, ft_isprint(c));
    printf("ft_isprint(%d) = %d\n", i, ft_isprint(i));
    printf("ft_isprint(%d) = %d\n", x, ft_isprint(x));

    printf("isprint(%d) = %d\n", c, isprint(c));
    printf("isprint(%d) = %d\n", i, isprint(i));
    printf("isprint(%d) = %d\n", x, isprint(x));
}