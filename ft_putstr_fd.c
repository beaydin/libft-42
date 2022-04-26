#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    write(fd, &*s, ft_strlen(s));
}

/*
int main()
{
    char *s = "harika birisiyim!";
    int a = open("0.txt", O_WRONLY);
    ft_putstr_fd(s, a);
}
*/
