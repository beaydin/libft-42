#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t l;
    char *substr;

    l = ft_strlen(s);
    if (start >= l || len == 0 || l == 0)
        return (0);
    if(l > len)
        l = len;
    substr = (char *)malloc(l * sizeof(char) + 1);
    if (!substr)
        return (0);
    i = 0;
    while(i < len && s[i + start]) //(i < len && s[i + start]) ya da (i < l)
    {
        substr[i] = s[i + start];
        i++; 
    }
    substr[i] = 0;
    return(substr);    
}

//start len arasi bir string olusturur, ve bu stringi return eder.
/*
int main()
{
    char    a[] = "denemegirdisi";
    printf("%s", ft_substr(a, 2, 19));
}
*/