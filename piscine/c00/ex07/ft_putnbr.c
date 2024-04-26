#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    unsigned int num;
    if (nb < 0)
    {
        ft_putchar('-');
        num = -1 * nb;
    } else {
        num = nb;
    }
    if (num < 10)
    {
        ft_putchar(num + '0');
    } else {
        ft_putnbr((num / 10 ));
        ft_putnbr((num % 10));
    }
}

