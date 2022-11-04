#include <stdio.h>
#include <stdlib.h>

int setmatch(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}


char *ft_strtrim(char const *s1, char const *set)
{
	char *ps1;
	char *pset;
	char *new;
	char *stop;
	
	ps1 = (char *)s1;
	pset = (char *)set;
	while (setmatch(*ps1, pset))
		ps1++;
	stop = ps1;
	while (*stop)
		stop++;
	stop--;
	while (setmatch(*stop, pset))
		stop--;
	new = (char *)malloc(sizeof(char) * (stop - ps1 + 1));
	int i = 0;
	while (ps1 <= stop)
	{
		new[i] = *ps1;
		i++;
		ps1++;
	}
	new[i] = '\0';
	return (new);
}


int main()
{
	char *s1 = "aababearabbbb";
	char *set = "ab";
	char match = 'a';
	char nomatch = 'x';

	printf("\n----SETMATCH TEST----\n");

	printf("%d\n", setmatch(match, s1));
	printf("%d\n", setmatch(nomatch, s1));

	if (setmatch(match, s1))
	{
		printf("The letter matches!\n");
	}
	if (!setmatch(match, s1))
	{
		printf("There is no such letter\n");
	}

	if (setmatch(nomatch, s1))
	{
		printf("The letter matches!\n");
	}
	if (!setmatch(nomatch, s1))
	{
		printf("There is no such letter\n");
	}

	printf("\n\n----STRTRIM TEST----\n");
	
	printf("%s\n", ft_strtrim(s1, set));
	
	return (0);
}