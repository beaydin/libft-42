#include "libft.h"

int str_counter(char const *s, char ayrac)
{
    unsigned int c;

    c = 0;
    while (*s)
    {
        if (*s == ayrac)
            s++;
        else
        {
            while (*s != ayrac && *s)
                s++;
            c++;
        }
    }
    return (c);
}

char **ft_split(char const *s, char c)
{
    char    **arr;
    unsigned int i;
    unsigned int a;

    if (!s)
        return (NULL);
    arr = (char **)ft_calloc(str_counter(s, c) + 1, sizeof(char *));
    if (!arr)
        return (NULL);
    a = 0;
    while (*s)
    {
        if (*s == c)
            s++;
        else
        {
            i = 0;
            while (*s && *s != c)
            {
                i++;
                s++;
            }
            arr[++a -1] =(char*)ft_calloc(i + 1, sizeof(char));
            ft_strlcpy(arr[a - 1], s - i, i + 1); 
        }
    }
    return (arr);
}

/*
int main()
{
	char *a ="ali,esma,gulcin,";
	char **mystr = ft_split(a, ',');
	int i = 0;
	while (mystr[i])
	{
		printf("%s\n",mystr[i]);
		i++;
	}
} 
*/