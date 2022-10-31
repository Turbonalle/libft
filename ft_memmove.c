#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
	const char *s;

	if (!dst && !src)
	{
		return (dst);
	}

	if (dst < src)
	{
		memcpy(dst, src, len);
	}

	d = dst;
	s = src;
	while (len-- > 0)
	{
		d[len] = s[len];
	}
	return (d);
}

int main () {
	char dest[] = "oldstring";
	const char src[]  = "newstring";

	printf("%p, %p\n", &dest, &src);
	printf("%p, %p\n", dest, src);

	printf("Before memmove: dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 9);
	printf("After memmove: dest = %s, src = %s\n", dest, src);

	char dest2[] = "oldstring";
	const char src2[]  = "newstring";

	printf("Before memmove: dest = %s, src = %s\n", dest2, src2);
	ft_memmove(dest2, src2, 9);
	printf("After memmove: dest = %s, src = %s\n", dest2, src2);

   return(0);
}