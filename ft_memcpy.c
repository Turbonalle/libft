#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    if (!dst && !src)
    {
        return (dst);
    }

    d = dst;
    s = src;
    while (n-- > 0)
    {
        *d++ = *s++;
    }
    return (d);
}

int main()
{
    char str[12] = "Hello sir!";
    char str2[12] = "Hello sir!";
    char dst[12];
    char dst2[12];

    // printf("Before memcpy:\n");
    // printf("str = %s\n", str);
    // printf("dst = %s\n", dst);

    // memcpy(dst, str, 2);

    // printf("\nAfter memcpy:\n");
    // printf("str = %s\n", str);
    // printf("dst = %s\n", dst);

    // printf("\nBefore ft_memcpy:\n");
    // printf("str2 = %s\n", str2);
    // printf("dst2 = %s\n", dst2);

    // ft_memcpy(dst2, str2, 2);

    // printf("\nAfter ft_memcpy:\n");
    // printf("str2 = %s\n", str2);
    // printf("dst2 = %s\n", dst2);

    printf("Before memcpy:\n");
    printf("str = %s\n", str);
    printf("dst = %s\n", dst);

    memcpy(str, str + 2, 4);

    printf("\nAfter memcpy:\n");
    printf("str = %s\n", str);
    printf("dst = %s\n", dst);

    printf("\nBefore ft_memcpy:\n");
    printf("str2 = %s\n", str2);
    printf("dst2 = %s\n", dst2);

    ft_memcpy(str2, str2 + 2, 4);

    printf("\nAfter ft_memcpy:\n");
    printf("str2 = %s\n", str2);
    printf("dst2 = %s\n", dst2);

    return (0);
}