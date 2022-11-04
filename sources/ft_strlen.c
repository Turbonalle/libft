#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        return (0);
    }
    printf("%zu\n", ft_strlen(av[1]));
    printf("%zu\n", strlen(av[1]));
    return (0);
}