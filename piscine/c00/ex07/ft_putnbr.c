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

// int main(void) {
//     ft_putnbr(0);
//     ft_putchar('\n');
//     ft_putnbr(-2147483648);
//     ft_putchar('\n');
//     ft_putnbr(2147483647);
//     ft_putchar('\n');
//     ft_putnbr(42);
//     ft_putchar('\n');
//     ft_putnbr(-42);
//     ft_putchar('\n');
//     return 0;
// }
