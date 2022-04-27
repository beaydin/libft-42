#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int s;
    int tmp;

    i = 0;
    s = 1;
    tmp = 0;
    while (32 == str[i] || (9 <= str[i] && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            s *= -1;
        i++;
    }
    while ('0' <= str[i] && str[i] <= '9')
    {
        tmp = (str[i] - 48) + 10 * tmp;
        i++;
    }
    return (tmp * s);
}

/*
int	main()
{
	char	a[] = "123- abc";
	printf("%d", ft_atoi(a));
}
*/