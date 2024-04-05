#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void) {
    int i = 122;
    for(i; i>= 97; i --) {
        ft_putchar(i);
    }
}

// int main() {
//     ft_print_reverse_alphabet();
//     ft_putchar('\n');
//     return 0;
// }
