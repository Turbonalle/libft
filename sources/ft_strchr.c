#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	char *ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
		{
			return (ptr);
		}
		ptr++;
	}
	if (c == 0)
	{
		return (ptr);
	}
	return (NULL);
}


int main()
{
    char test = 0;
	char *tweet = "Hello my na0me is Eemeli!";

    char *mention = strchr(tweet, test);

    printf("mention: %s\n", mention);

    printf("%p\n", mention);

    char *mention1 = ft_strchr(tweet, test);

    printf("mention: %s\n", mention1);

    printf("%p\n", mention);

    return (0);
}


// char nochartest(char *str, char ch, int tries)
// {
// 	if (ft_strchr(str, ch) == NULL)
// 	{
// 		printf("There is no such character in the sentence. Try again!\n");
// 		scanf (" %c", &ch);
// 	}
// 	return (ch);
// }


// int main(int ac, char **av)
// {
// 	char *str = "Bananas are good for hungry monkeys!";
// 	char ch;
// 	char *ptr;
// 	char *arr[] = {"First", "Second", "Third", "Fourth", "Fifth", "Sixth"};
// 	int i = 0;
// 	int tries = 3;

// 	printf ("Original string: \"%s\" \n", str);
// 	printf ("Please enter a character you want to search in the string: "); 
// 	scanf (" %c", &ch);

// 	if (ft_strchr(str, ch) == NULL)
// 	{
// 		while (tries > 0 && ft_strchr(str, ch) == NULL)
// 		{
// 			tries--;
// 			if (tries == 0)
// 			{
// 				printf("You don't deserve any more tries...\n");
// 			}
// 			else
// 			{
// 				ch = nochartest(str, ch, tries);
// 			}
// 		}
// 	}

// 	ptr = ft_strchr(str, ch);

// 	while (ptr)
// 	{
// 		printf("%s '%c' is at: '%s'\n", arr[i], ch, ptr);
// 		ptr = ft_strchr(ptr + 1, ch);
// 		i++;
// 	}
	
// 	return (0);
// }