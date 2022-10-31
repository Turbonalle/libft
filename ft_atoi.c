#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;
    if (!str)
    {
        return (NULL);
    }
    if (*str == '-')
    {
        sign *= -1;
        str++;
    }
    while (*str && *str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - 48;
        str++;
    }
    return (result * sign);
}


int main()
{
    const char *a = "1-2";
    const char *b = "--5";
    const char *c = "2147 345"; // INTMAX
    const char *d = "-2147   4"; // INTMIN
    const char *e = "+-3648"; // OVER INTMAX
    const char *f = "-+23649"; // OVER INTMAX
    const char *g = "9223372036854775807"; // OVER LONGLONGINTMAX
    const char *h = "876h78"; // OVER LONGLONGINTMAX

    printf("%s = %d\n", a, atoi(a));
    printf("%s = %d\n", a, ft_atoi(a));
    printf("%s = %d\n", b, atoi(b));
    printf("%s = %d\n", b, ft_atoi(b));
    printf("%s = %d\n", c, atoi(c));
    printf("%s = %d\n", c, ft_atoi(c));
    printf("%s = %d\n", d, atoi(d));
    printf("%s = %d\n", d, ft_atoi(d));
    printf("%s = %d\n", e, atoi(e));
    printf("%s = %d\n", e, ft_atoi(e));
    printf("%s = %d\n", f, atoi(f));
    printf("%s = %d\n", f, ft_atoi(f));
    printf("%s = %d\n", g, atoi(g));
    printf("%s = %d\n", g, ft_atoi(g));
    printf("%s = %d\n", h, atoi(h));
    printf("%s = %d\n", h, ft_atoi(h));
    
    return (0);
}