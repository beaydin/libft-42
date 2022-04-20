#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t l1;
    size_t l2;
    char *str;
    int i;

   	if (!s1 || !s2)
		return (0);
    l1 = ft_strlen(s1);
    l2 = ft_strlen(s2);
    str = (char *)malloc((l1 + l2) * sizeof(char) + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        str[l1 + i] = s2[i];
        i++;
    }
    str[l1 + i] = 0;
    return (str);        
}

/*
int	main()
{
	char	a[] = "slm ";
	char	b[] = "cnm!";
	printf("%s", ft_strjoin(a, b));
}
*/