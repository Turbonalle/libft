#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *p;

    i = 0;
    p = (char *)s;
    if (n != 0)
    {
        while (i < n)
        {
            p[i] = '0';
            i++;
        }
    }
}

void *ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

int main()
{
    int* allocated_with_calloc = ft_calloc(0, sizeof(int));
 
    printf("Values of allocated_with_calloc:\n");
    for (size_t i = 0; i < 5; ++i) {
        printf("%d\n", allocated_with_calloc[i] + 1);
    }
    free(allocated_with_calloc);
}