#include <unistd.h>

void ft_putchar(char p){

    write(1, &p, 1);
}

void ft_print_comb2(void){

    int y;
    int x;

    y = 0;
    while (y <= 98)
    {
        x = y + 1;
        while (x <= 99)
        {
            
            ft_putchar(y / 10 + '0');
            ft_putchar(y % 10 + '0');
            ft_putchar(' ');
            ft_putchar(x / 10 + '0');
            ft_putchar(x % 10 + '0');
            if ((y != 98) || (x != 99)){
                ft_putchar(',');
                ft_putchar(' ');
            }
            x++;
        }
        y++;
    }
    
}

int main(){

    ft_print_comb2();

    return 0;
}