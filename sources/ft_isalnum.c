#include <ctype.h>
#include <stdio.h>

int ft_isalpha(char c)
{
    if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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

    x = isalpha(c);
    printf("%d\n", x);
    x = isalpha(d);
    printf("%d\n", x);

    x = ft_isalpha(c);
    printf("%d\n", x);
    x = ft_isalpha(d);
    printf("%d\n", x);
    
    return (0);
}