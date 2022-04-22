#include "libft.h"

int control_cut(char const *set, char a)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == a)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    int i;
    char *rtrn;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    end = ft_strlen(s1);
    while (s1[start] && control_cut(set, s1[start]))
        start++;
    while (s1[end] && control_cut(set, s1[end]))
        end--;
    rtrn = (char*)malloc(sizeof(char) * (end - start) + 1);
    if (!rtrn)
        return(NULL);
    i = 0;
    while (start < end)
        rtrn[i++] = s1[start++];
    rtrn[i] = 0;
    return (rtrn);
}

/*
int	main()
{
	char	a[] = "     m r b       ";
	char	b[] = " ";
	printf("%s", ft_strtrim(a, b));
}
*/

// s1in başından ve sonundan setteki karakterleri kesiyor