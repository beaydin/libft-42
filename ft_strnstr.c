#include "libft.h"

char *ft_strnstr(const char	*big, const char *little, size_t len)
{
    size_t i;
    size_t a;

    if (little[0] == 0)
        return ((char*)big);
    i = 0;    
    while (big[i] != 0)
    {
        a = 0; 
        while (big[i + a] == little[a] && len > i + a)
        {            
            if (!big[i + a] && !little[a])
                return ((char*)(big + i)); 
            a++;
        }
        if (!little[a])
		   return ((char *)big + i);
        i++;
    }
    return (0);
}

/*
int	main()
{
	char	a[] = "ensondan";
	char	b[] = "sonda";
	printf("%s", ft_strnstr(a, b, 10));
}
*/