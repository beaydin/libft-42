#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)    
    {
        if (*(unsigned char*)(str1 + i) != *(unsigned char*)(str2 + i))
            return (*(unsigned char*)(str1 + i) - *(unsigned char*)(str2 + i));
        i++;
    }
    return (0);
}

/*
int	main()
{
	char	a[] = "aab";
	char	b[] = "aac";
	printf("%d", ft_memcmp(a, b, 10));
}
*/