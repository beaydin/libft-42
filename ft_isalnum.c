#include "libft.h"

int ft_isalnum(int a)
{
	if (a >= 64 && a <= 90 || a >= 97 && a <= 122 || a >= 48 && a <= 57)
		return(1);
	return(0);
}

/*
int main()
{
	printf("%d", ft_isalnum('a'));
}
*/
