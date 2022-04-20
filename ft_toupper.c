#include "libft.h"

int ft_toupper(int ch)
{
    if (ch >= 97 && ch <= 122)
        return (ch - 32);
    return (ch);
}

/*
int main()
{
    printf("%d", ft_toupper('a'));
}
*/