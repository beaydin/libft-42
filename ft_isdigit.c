#include "libft.h"

int ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return(1);
	return(0);
}

/*
int main()
{
	printf("%d", ft_isdigit('a'));
}
*/
