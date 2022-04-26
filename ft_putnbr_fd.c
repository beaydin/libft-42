#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    else if (n < 0)
    {
        n *= -1;
        write (fd, "-", 1);
        ft_putnbr_fd(n, fd);
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }  
    else
    {
        n = n + '0';
        write(fd, &n, 1);
    }
}

/*
int main()
{
    int n = 12345;
    int a = open("0.txt", O_WRONLY);
    ft_putnbr_fd(n, a);
}
*/