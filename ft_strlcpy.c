#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i])
		{
			
		}
	}
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

void test(int size)
{
    char string[] = "Hello sir!";
    char buffer[12];
    int result;

    result = strlcpy(buffer,string,size);

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