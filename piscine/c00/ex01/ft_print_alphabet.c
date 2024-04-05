#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_alphabet(void){
    int i = 97;
    for(i; i<= 122; i ++) {
        ft_putchar(i);
    }
}

int main(){
    ft_print_alphabet();
    ft_putchar('\n');
}
