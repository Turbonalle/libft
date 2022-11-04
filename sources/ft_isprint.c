#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
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

	printf("My function:\n");
    printf("%d\n", isprint(a));
    printf("%d\n", isprint(b));
    printf("%d\n", isprint(c));
    printf("%d\n", isprint(d));
	printf("\nReal function:\n");

    printf("%d\n", ft_isprint(a));
    printf("%d\n", ft_isprint(b));
    printf("%d\n", ft_isprint(c));
    printf("%d\n", ft_isprint(d));
    
    return (0);
}
