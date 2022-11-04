#include "libft.h"
#include <stdio.h>
#include <ctype.h>

// int test_isalpha()
// {
//     int a = 'a';
//     int b = 'A';
//     int c = L'Ä';
//     int n = '9';
//     printf("Testing isalpha:\n");
//     printf("%d\n", isalpha(a) == ft_isalpha(a));
//     printf("%d\n", isalpha(b) == ft_isalpha(b));
//     printf("%d\n", isalpha(c) == ft_isalpha(c));
//     printf("%d\n", isalpha(n) == ft_isalpha(n));
// }

int main()
{
    int a = 'a';
    int b = ' ';
    int c = L'Ä';
    int n = '9';

    printf("Testing isalpha:\n");
    printf("%d\n", isalpha(a) == ft_isalpha(a));
    printf("%d\n", isalpha(b) == ft_isalpha(b));
    printf("%d\n", isalpha(c) == ft_isalpha(c));
    printf("%d\n", isalpha(n) == ft_isalpha(n));

    printf("Testing isdigit:\n");
    printf("%d\n", isdigit(a) == ft_isdigit(a));
    printf("%d\n", isdigit(b) == ft_isdigit(b));
    printf("%d\n", isdigit(c) == ft_isdigit(c));
    printf("%d\n", isdigit(n) == ft_isdigit(n));

    printf("Testing isalnum:\n");
    printf("%d\n", isalnum(a) == ft_isalnum(a));
    printf("%d\n", isalnum(b) == ft_isalnum(b));
    printf("%d\n", isalnum(c) == ft_isalnum(c));
    printf("%d\n", isalnum(n) == ft_isalnum(n));

    printf("Testing isascii:\n");
    printf("%d\n", isascii(a) == ft_isascii(a));
    printf("%d\n", isascii(b) == ft_isascii(b));
    printf("%d\n", isascii(c) == ft_isascii(c));
    printf("%d\n", isascii(n) == ft_isascii(n));

    printf("Testing isprint:\n");
    printf("%d\n", isprint(a) == ft_isprint(a));
    printf("%d\n", isprint(b) == ft_isprint(b));
    printf("%d\n", isprint(c) == ft_isprint(c));
    printf("%d\n", isprint(n) == ft_isprint(n));
}