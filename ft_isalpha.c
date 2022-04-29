#include "libft.h"

int ft_isalpha(int a)
{
	if ((a >= 64 && a <= 90) || (a >= 97 && a <= 122))
		return(1);
	return(0);
}

/*
int main()
{
	printf("%d", ft_isalpha('a'));
}
*/
