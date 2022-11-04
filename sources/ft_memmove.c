#include <string.h>
#include <stdio.h>

/*
	The memmove() function copies len bytes from string src to string dst.
	The two strings may overlap; the copy is always done in a non-destructive manner.

	The memmove() function returns the original value of dst.
*/

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
	const char *s;
	size_t i;

	if (!dst && !src)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

int main () {
	int n = 0;
	int max = 8;

	while (n <= max)
	{
		char dst[] = "xxxx";
		char src[] = "123456";
		ft_memmove(dst, src, n);
		printf("dst, %d = '%s'\n", n, dst);
		n++;
	}
	printf("\n");
	n = 0;
	while (n <= max)
	{
		char dst[] = "xxxx";
		char src[] = "123456";
		memmove(dst, src, n);
		printf("dst, %d = '%s'\n", n, dst);
		n++;
	}

   return(0);
}