#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    if (!dst && !src)
    {
        return (dst);
    }
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
	    d[i] = s[i];
		i++;
	}
    return (d);
}

int ft_memcpy_test() 
{
    const char src[50] = "I really hope this will work.";
	char dest[50];

	printf("*ft_memcpy: \n");
	strcpy(dest,"Helloooo!!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
   
	printf("*memcpy  : \n");
    strcpy(dest,"Helloooo!!!");
    printf("Before memcpy dest = %s\n", dest);
    memcpy(dest, src, strlen(src)+1);
    printf("After memcpy dest = %s\n\n", dest);

    return(0);
}

int main()
{
    char str[12] = "Hello sir!";
    char str2[12] = "Hello sir!";
    char dst[12];
    char dst2[12];

    char string[12] = "Hello sir!";
    char string2[12] = "Hello sir!";
    char dest[12];
    char dest2[12];

    printf("Before memcpy:\n");
    printf("str = %s\n", str);
    printf("dst = %s\n", dst);

    memcpy(dst, str, 2);

    printf("\nAfter memcpy:\n");
    printf("str = %s\n", str);
    printf("dst = %s\n", dst);

    printf("\nBefore ft_memcpy:\n");
    printf("str2 = %s\n", str2);
    printf("dst2 = %s\n", dst2);

    ft_memcpy(dst2, str2, 2);

    printf("\nAfter ft_memcpy:\n");
    printf("str2 = %s\n", str2);
    printf("dst2 = %s\n", dst2);


    printf("\nBefore memcpy:\n");
    printf("string = %s\n", string);
    printf("dest = %s\n", dest);

    memcpy(string, string + 2, 4);

    printf("\nAfter memcpy:\n");
    printf("string = %s\n", string);
    printf("dest = %s\n", dest);

    printf("\nBefore ft_memcpy:\n");
    printf("string2 = %s\n", string2);
    printf("dest2 = %s\n", dest2);

    ft_memcpy(string2, string2 + 2, 4);

    printf("\nAfter ft_memcpy:\n");
    printf("string2 = %s\n", string2);
    printf("dest2 = %s\n", dest2);

    ft_memcpy_test();

    return (0);
}