#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
    return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('1' <= c && c <= '9'));
}

int main()
{
    int c = 'a';
    int i = 7;
    int x = ' ';

    i++;

    printf("ft_isalnum(%d) = %d\n", c, ft_isalnum(c));
    printf("ft_isalnum(%d) = %d\n", i, ft_isalnum(i));
    printf("ft_isalnum(%d) = %d\n", x, ft_isalnum(x));

    printf("isalnum(%d) = %d\n", c, isalnum(c));
    printf("isalnum(%d) = %d\n", i, isalnum(i));
    printf("isalnum(%d) = %d\n", x, isalnum(x));
}