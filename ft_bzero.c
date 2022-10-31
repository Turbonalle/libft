#include <string.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char *)b;
    while (i < len)
    {
        ptr[i++] = (unsigned char)c;
    }
    return (ptr);
}

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *p;

    i = 0;
    p = (char *)s;
    if (n != 0)
    {
        // while (i < n)
        // {
        //     p[i] = '\0';
        //     i++;
        // }
        ft_memset(p, '\0', n);
    }
}

int main()
{
    int n = 5;
    int x = n + 2;

    char str[20] = {"Hello sir!"};
    printf("Before bzero: |%s|\n", str);
    
    bzero(str, n);
    printf("After bzero: |%s|\n", &str[x]);
    
    char str2[20] = "Hello sir!";
    printf("Before ft_bzero: |%s|\n", str2);
    
    ft_bzero(str2, n);
    printf("After ft_bzero: |%s|\n", &str2[x]);
    
    return (0);
}