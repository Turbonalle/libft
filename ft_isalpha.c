#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
    return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

int main()
{
    int c = 'a';
    int i = 1;

    printf("ft_isalpha(c) = %d\n", ft_isalpha(c));
    printf("ft_isalpha(i) = %d\n", ft_isalpha(i));

    printf("isalpha(c) = %d\n", isalpha(c));
    printf("isalpha(i) = %d\n", isalpha(i));
}