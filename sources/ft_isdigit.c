#include <ctype.h>
#include <stdio.h>

int ft_isdigit(char c)
{
    if (c >= 48 && c <= 57)
    {
        return (1);
    }
    return (0);
}

int main()
{
    char c = '7';
    char d = 'e';
    int x;

    x = isdigit(c);
    printf("%d\n", x);
    x = isdigit(d);
    printf("%d\n", x);

    x = ft_isdigit(c);
    printf("%d\n", x);
    x = ft_isdigit(d);
    printf("%d\n", x);
    
    return (0);
}