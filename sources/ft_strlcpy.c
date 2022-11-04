#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

void test(int size)
{
    char string[] = "Hello sir!";
    char buffer[8];
    int result;

    result = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n", string, buffer, result);
}

int main()
{
	test(12);
	test(4);
	test(1);
	test(0);
	test(15);
}