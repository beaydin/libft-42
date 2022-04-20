#include "libft.h"

char* ft_strchr(const char* str, int ch)
{
    int i;

    i = 0;
    while(str[i] != ch)
    {
        if(!str[i])
            return (0);
        i++;
    }   
    return ((char*)(str + i));
}

/*
int	main()
{
	char	a[] = "abcde";
	char	b = 'g';
	
	printf("%s", ft_strchr(a, b));
}
*/