#include "libft.h"

void* ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    
    if(!src && !dest)
        return(0);

    i = 0;
    while(i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return(dest);
}

/*
int main()
{
    char *src = "beyzasağır";
    char dest[20] = "fonksiyon";

    printf("%s", ft_memcpy(dest, src, 6));
}
*/