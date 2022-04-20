#include "libft.h"

int ft_strlen(const char *array)
{
    int counter;

    counter = 0;
    while(array[counter])
        counter++;
    return(counter);
}

/*
int main()
{
    char *a;
    int i;

    a = "beyza";
    i = ft_strlen(a);
    printf("%d", i);
    return(0);
}
*/