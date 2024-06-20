#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb){

    char c;

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    
    }
    else if (nb < 0){
        
        nb = -nb; // if nb is nigative it will switch it to positive
        ft_putchar('-');
        ft_putnbr(nb);
        // exit and it will not be executed it will do a Recursive Call
    }
    else if (nb <= 9){
        ft_putchar(nb + '0');
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}


int main(){

    ft_putnbr(-100);

    return 0;
}