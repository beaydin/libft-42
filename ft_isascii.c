#include "libft.h"

int ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return(1);
	return(0);
}


int main()
{
	printf("%d", ft_isascii('a'));
}

