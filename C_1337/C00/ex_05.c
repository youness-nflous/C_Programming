#include <unistd.h>

void    writing(char x, char y, char z){

    write(1, &x, 1);
    write(1, &y, 1);
    write(1, &z, 1);
    
    if (! (x == '7' && y == '8' && z == '9')){

        write(1, ", ", 2);
    }
    
}

void    ft_print_comb(void){

    char x, y, z;

    x = '0';

    while (x <= '7')
    {
        y = x + 1;
        while (y <= '8')
        {
            z = y + 1;
            while (z <= '9')
            {
                writing(x, y, z);
                z++;
            }
            y++;
        }
        x++;
    }
    
}

// test
int main(){


    ft_print_comb();

    return 0;
}