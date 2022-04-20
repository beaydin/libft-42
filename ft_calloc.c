#include "libft.h"

void* ft_calloc(size_t num, size_t size)
{
    void* a;

    a = malloc(size *num);
    if (!a)
        return (0);
    ft_bzero(a, num * size);
    return (a);
}

/*
int	main()
{
	ft_calloc(5, sizeof(char));
}
*/