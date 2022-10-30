#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    void *p;

    p = s;
    while (n--)
    {
        *(char *)p++ = (unsigned char)c;
    }
    return (s);
}

int main()
{
    char a[] = "Hello!";
    char b[] = "Hello!";

    printf("Before ft_memset: |%s|\n", a);
    printf("After ft_memset:  |%s|\n", ft_memset(a, 'a', 3));
    printf("Before memset: |%s|\n", b);
    printf("After memset:  |%s|\n", memset(b, 'a', 3));

}