#include "libft.h"

int count_digit(int n)
{
    int digit;

    digit = 0;
    if (n <= 0) //negatif sayılarda eksiyede byte ayırmış oluyoruz
        digit++;
    while(n)
    {
        n /= 10;
        digit++;
    }
    return (digit);
}

char *ft_itoa(int n)
{
    int digit;
    char *str;

    str = (char *)ft_calloc(count_digit(n) + 1, sizeof(char));
    if (!str)
        return (NULL);
    if (n == 0)
        *str = '0';
    if (n < 0)
    {
        if (n == -2147483648)
        {
            ft_strlcpy(str, "-2147483648", digit + 1);
            return (str);
        }
        n *= -1;
        str[0] = '-';
    }
    while (n != 0)
    {
        *(str + --digit) = (n % 10) + '0'; //sondan başlayarak sayıyı diziyor (digit maksta)
        n = n / 10;
    }
    return (str);
}

/*
int	main()
{
	printf("%s", ft_itoa(-128967264));
}*/