#include <ctype.h>
#include <stdio.h>

int ft_isascii(char c)
{
    if (c >= 0 && c <= 127)
    {
        return (1);
    }
    return (0);
}

int main()
{
    char c = ' ';
    char d = 'z';
    int x;

    x = isascii(c);
    printf("%d\n", x);
    x = isascii(d);
    printf("%d\n", x);

    x = ft_isalpha(c);
    printf("%d\n", x);
    x = ft_isalpha(d);
    printf("%d\n", x);
    
    return (0);
}