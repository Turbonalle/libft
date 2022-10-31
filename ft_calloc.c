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
	// int i;

	ptr = malloc(sizeof(size) * count);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, count);
	// i = 0;
	// while (i < count)
	// {
	// 	ptr[i++] = 0;
	// }
	return (ptr);
}

int main()
{
    int* allocated_with_malloc = malloc(5 * sizeof(int));
    int* allocated_with_calloc = ft_calloc(5, sizeof(int));
 
    printf("Values of allocated_with_calloc: ");
    for (size_t i = 0; i < 5; ++i) {
        printf("%d ", allocated_with_calloc[i] + 1);
    }
    putchar('\n');
 
    int* failed_malloc = malloc(1000000000000);
    if (failed_malloc == NULL) {
        printf("The allocation failed, the value of "
               "failed_malloc is: %p",
               (void*)failed_malloc);
    }
 
    free(allocated_with_malloc);
    free(allocated_with_calloc);
}