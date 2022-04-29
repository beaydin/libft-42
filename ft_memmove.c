#include "libft.h"

void* ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n - 1;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
int main()
{
	char	a[] = "kelebekler";
	char	b[] = "lebekler";
	size_t	c = sizeof(char)* 3;
	
	printf("%s", ft_memmove(a, b, c));
}
int main()
{
	char a[] = "start";
	printf("%s", ft_memmove(a+2,a,3));
}*/