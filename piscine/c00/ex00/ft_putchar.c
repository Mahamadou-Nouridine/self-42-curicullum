#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

// void main() {
//     ft_putchar('Z');
//     ft_putchar('\n');
// }
