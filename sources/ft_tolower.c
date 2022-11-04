#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }
    return (c);
}

int main()
{
    int a = 'a';
    int b = 'B';
    int c = ' ';
    int d = '4';
    printf("%d\n", tolower(a) == ft_tolower(a));
    printf("%d\n", tolower(b) == ft_tolower(b));
    printf("%d\n", tolower(c) == ft_tolower(c));
    printf("%d\n", tolower(d) == ft_tolower(d));
    printf("\n");
    printf("%c = %c\n", a, ft_tolower(a));
    printf("%c = %c\n", b, ft_tolower(b));
    printf("%c = %c\n", c, ft_tolower(c));
    printf("%c = %c\n", d, ft_tolower(d));
    return (0);
}