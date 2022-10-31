#include <ctype.h>
#include <stdio.h>

int ft_isalpha(unsigned char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return (1);
    }
    return (0);
}

int main()
{
    char a = 'A';
    char b = '3';
    char c = ' ';
    char d = 'z';

    // char testarray = ('A', '3', )

    printf("%d\n", isalpha(a));
    printf("%d\n", isalpha(b));
    printf("%d\n", isalpha(c));
    printf("%d\n", isalpha(d));

    printf("%d\n", ft_isalpha(a));
    printf("%d\n", ft_isalpha(b));
    printf("%d\n", ft_isalpha(c));
    printf("%d\n", ft_isalpha(d));
    
    return (0);
}