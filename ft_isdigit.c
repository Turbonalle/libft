#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    return ('1' <= c && c <= '9');
}

int main()
{
    int c = 'a';
    int i = 7;

    i++;

    printf("ft_isdigit(%d) = %d\n", c, ft_isdigit(c));
    printf("ft_isdigit(%d) = %d\n", i, ft_isdigit(i));

    printf("isdigit(%d) = %d\n", c, isdigit(c));
    printf("isdigit(%d) = %d\n", i, isdigit(i));
}