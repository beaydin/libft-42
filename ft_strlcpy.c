#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t i;

    i = 0;
    if (n > 0)
    {
        while (src[i] && i < (n-1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while(src[i])
        i++;
    
    return (i);
}

/*
int main()
{
  	char	a[] = "fonksiyonyer";
	char	b[] = "kopyala";

    printf("%zu\n", ft_strlcpy(a, b, 5));
    printf("%s", a);
}
*/

//srcü deste n-1 kadar kopyalıyor (n.ye null) srcün boyutunu döndürüyor