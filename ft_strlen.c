#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}

int main()
{
    char *s = "Hello!";

    printf("%s = %d bytes long\n", s, ft_strlen(s));
    printf("%s = %d bytes long\n", s, strlen(s));

}