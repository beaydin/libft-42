#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *a;
    int i;

    if (!s || !f)
        return (NULL);
    if (!(a = (char*)ft_calloc(ft_strlen(a) + 1, sizeof(char))))
        return (NULL);
    i = 0;
    while (s[i])
    {
        a[i] = f(i,s[i]); // unsigned int neden index değerine eşit??
        i++; 
    }
    return (a);
}

/*
char deneme(unsigned int i, char a)
{
    a++;
    return (a);
}

int main()
{
    char *s = "1234567";
    printf ("%s", ft_strmapi(s, *deneme));

}
*/