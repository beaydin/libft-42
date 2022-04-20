#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t sizedst;
    size_t sizesrc;
    size_t i;
    size_t a;

    sizedst = ft_strlen(dst);
    sizesrc = ft_strlen(src);
    a = sizedst;
    if(dstsize <= sizedst)
        return(dstsize + sizesrc);
    i = 0;
    while (src[i] && a < (dstsize - 1))
    {
        dst[a] = src[i];
        i++;
        a++;
    }
    dst[a] = 0;
    return(sizedst + sizesrc);
}
/*
int main()
{
    char dst[30] = "vscodesenin";
    char *src = "amk";
    int i;

    i = ft_strlcat(dst, src, 15);
    printf("%d\n", i);
    printf("%s", dst);
}
*/