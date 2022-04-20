#include "libft.h"

int ft_tolower(int ch)
{
    if (ch >= 65 && ch <= 90)
        return (ch + 32);
    return (ch);
}

/*
int	main()
{
	printf("%d", ft_tolower('G'));
}
*/