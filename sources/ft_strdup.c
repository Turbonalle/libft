#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

// char *ft_strdup(const char *s1)
// {
// 	char *s;
// 	char *new;
// 	int len;
// 	int i;
	
// 	s = (char *)s1;
// 	len = ft_strlen(s1);
// 	new = (char *)malloc(sizeof(*new) * (len + 1));
// 	if (!new)
// 	{
// 		return (NULL);
// 	}
// 	i = 0;
// 	while (len-- > 0)
// 	{
// 		new[i++] = *s++;
// 	}
// 	new[i] = '\0';
// 	return(new);
// }


char *ft_strdup(const char *s1)
{
	char *s;
	char *new;
	int i;
	
	s = (char *)s1;
	new = (char *)malloc(sizeof(*new) * (ft_strlen(s1) + 1));
	if (!new)
	{
		return (NULL);
	}
	i = 0;
	while (*s)
	{
		new[i++] = *s++;
	}
	new[i] = '\0';
	return(new);
}


int main()
{
	char str[] = "Hello sir! Can you read this text even if they aren't all normal n0rmal [chars]?";
	char *dst = ft_strdup(str);

	printf("----------\nstrdup:\nstr = |%s|\ndst = |%s|\n", str, strdup(str));
	printf("----------\nft_strdup:\nstr = |%s|\ndst = |%s|\n", str, dst);
	printf("----------\n");
}