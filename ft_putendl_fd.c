#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    write (fd, &*s, ft_strlen(s));
    write (fd, "\n", 1);
}

/*
int main()
{
    char *b = "muq!!";
    int a = open("0.txt", O_WRONLY);
    ft_putendl_fd(b, a);
}
*/