#include <string.h>
#include <stdio.h>

/*
    Fills the first n bytes of the memory area pointed to by "b" with the constant byte "c".
    Returns a pointer to the memory area "b".

*/

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


int main()
{
    // TESTING CHAR
    char str[20] = "Hello sir!";
    printf("Before memset: %s\n", str);
    printf("After memset: %s\n", memset(str, 'Y', 1 * sizeof(char)));
    
    char str2[20] = "Hello sir!";
    printf("Before ft_memset: %s\n", str2);
    printf("After ft_memset: %s\n", ft_memset(str2, 'Y', 1 * sizeof(char)));

    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8};
    // printf("Before memset: %s\n", arr);
    
    ft_memset(arr, -9, 8);
    int i = 0;
    while (i < 7)
    {
        printf("%d\n", arr[i++]);
    }
    // printf("After memset: %s\n", arr);
    
    // char arr2[20] = {1, 2, 3, 4, 5, 6, 7, 8};
    // printf("Before ft_memset: %s\n", arr2);
    
    // ft_memset(arr2, '9', 1 * sizeof(char));
    // printf("After ft_memset: %s\n", arr2);

    return (0);
}