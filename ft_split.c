static size_t ft_count(const char *s, char c)
{
    size_t i;
    size_t words;

    i = 0;
    words = 0;
    if (s == '0')
    {
        return (0);
    }
    while (s[i] && s[i] == c)
    {
        i++;
    }
    while (s[i])
    {
        words++;
        while (s[i] && s[i] != c)
        {
            i++;
        }
        while (s[i] && s[i] == c)
        {
            i++;
        }
    }
    return (words);
}


static size_t ft_wordlen(const char *s, char c)
{
    size_t i;
    
    i = 0;
    while (s[i] && s[i] != c)
    {
        i++;
    }
    return (i);
}


static char *strndup(const char *s, size_t n)
{
    size_t i;
    char *result;

    if (!(result = (char *)malloc(sizeof(char) * (n + 1))))
    {
        return (0);
    }
    i = 0;
    while (i < n)
    {
        result[i] = s[i];
        i++;
    }
    result[i] = '\0';
    return (result);
}


char **ft_split(const char *s, char c)
{
    size_t i;
    size_t len;
    size_t words;
    char **result;

    words = ft_count(s, c);

    if (!(result = (char *)malloc(sizeof(char *) * (words + 1))) || s == 0)
    {
        return (0);
    }

    i = 0;
    while (i < words)
    {
        while (*s && *s == c)
        {
            s++;
        }
        len = ft_wordlen(s, c);
        ;
        if (!(result[i] = ft_strndup(s, len)))
        {
            free(result, i);
            return (0);
        }
        s += len;
        i++;
    }
    result[words] = '\0';
    return (result);
}


int main()
{
    char test[] = "Hello my friend!";
    char **arr;

    
    return (0);
}