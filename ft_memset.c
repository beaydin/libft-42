#include "libft.h"

void* ft_memset(void *dest, int c, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        *(unsigned char *)(dest + i) = (unsigned char)c;
        //void pointer olduğu için tuttuğu değerin türünü *(tür *) şeklinde yazıyoruz
        i++;
    }
    return (dest);
}

/*
int main()
{
    char a[] = "123456";
   
    printf("%s", ft_memset(a, 'g', sizeof(char)*4));
}
*/
