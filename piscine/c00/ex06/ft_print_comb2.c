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

void ft_print_comma_and_space()
{
    ft_putchar(',');
    ft_putchar(' ');
}

void printDoubleNum(int num) {
    if(num< 10) {
        ft_putnbr(0);
        ft_putnbr(num);
    } else ft_putnbr(num);
}

void ft_print_comb2(void)
{
    int num1 = 0;
    int num2 = 0;
    while(num1< 99) {
        num2 = num1 + 1;
        while (num2 < 100) {
            printDoubleNum(num1);
            ft_putchar(' ');
            printDoubleNum(num2);
            if(!(num1 == 98 && num2 == 99)) {
                ft_print_comma_and_space();
            }
            num2 ++;
        }
        num1 ++;
    }
}

// void main()
// {
//     ft_print_comb2();
//     ft_putchar('\n');
// }
