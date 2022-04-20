#include "libft.h"

void* ft_memchr(const void *str, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && *(unsigned char *)(str + i))
    {
        if (*(unsigned char*)(str + i) == (unsigned char)c)
            return ((void*)(str + i));
        i++;
    }
    return (0);
}

/*
int	main()
{
	char	a[] = "aaaaa";
	printf("%s", ft_memchr(a, 'l', 5));
}
*/