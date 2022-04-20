#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
    int i;
    
    i = ft_strlen(str);
    while(0 <= i)
    {
        if (str[i] == (char)ch)
            return ((char*)(str + i));
        i--;
    }
    return (0);
}

/*
int	main()
{
	char	a[] = "bilgisayar";
	char	b = 'i';
	printf("%s", ft_strrchr(a, b));
}
*/