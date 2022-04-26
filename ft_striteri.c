#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s)
        return;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]); //?
        i++;
    }
}

/*
void deneme(unsigned int i, char *a)
{
    *a = 'a';
}

int main()
{
    char a[] = "1234567";

    ft_striteri(a, *deneme);
    printf ("%s", a);
}
*/