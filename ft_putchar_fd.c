#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1); //0 ve 1 birer fd aslında biz o hazır fdler yerine kendi tanımladığımızı koyuyoruz.
}

/*
int main()
{
    int a = open("0.txt", O_WRONLY); //O_WRONLY open ile açtığımız dosyaya yazma yetkisi veriyor
    ft_putchar_fd('0', a);
}
*/