#include <stdio.h>
#include <stdlib.h>

/*
	Concatenates strings.
	Safer than "strncat".

	Takes the full size of the buffer.
	Guarantees to NUL-terminate the result
		(as long as "size" > 0 && there is at least one byte free in "dst").
	A byte for NUL should be included in "size".
	Both src and dst must be NUL-terminated.

	Returns the total length of the string it tried to create
		(length of "dst" + length of "src").
	
	If "strlcat" traverses "size" without finding a NUL:
		- length of string is considered to be "size".
		- "dst" won't be NUL-terminated (since there's no space for NUL).
	

*/

size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	if (!size)
		return (0);
	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}

int main()
{
	char dst[] = "Hello!";
	char src[] = " How are you?";
	int r;
	const int size = 20;
	char buffer[size];

	printf("dst = '%s'\nsrc = '%s'\nsize = %zu\nft_strlcat = %zu", dst, src, size, ft_strlcat(dst, src, size));
    printf("'%s'", dst);
    return (0);
}