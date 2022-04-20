#include "libft.h"

char* ft_strdup(const char *str)
{
    char *a;
    size_t len;
    int i;
 
    i = 0;
    len = ft_strlen(str);
    a = (char *)malloc(len * sizeof(char) + 1);
    if (!a)
        return (0);
    while(str[i])
    {
        a[i] = str[i];
        i++;
    }
    a[i] = 0;
    return (a);
}

/*
int	main()
{
	char a[] = "abcdeg";
	char *i = "hhhgghg";
	i = ft_strdup(a);
	printf("%s", i);
}
*/