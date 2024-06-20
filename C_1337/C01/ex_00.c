#include <stdio.h>

void ft_ft(int *nbr){

    // than nbr take a value of 0x01F
    *nbr = 42; // This line dereferences
               // the pointer nbr and assigns the value 42
}

// Test
int main(){

    int *nbr; // pointer;
    int number; // int variable;

    nbr = &number; // assigning address to pointer;
                   /* exampl
                   number address is 0x01F
                   pointer address is 0x02F
                   the pointer is take the number addrress as a value
                   that's mean
                   nbr = &number
                   nbr = 0x01F as a value
                   */
    ft_ft(nbr); 

    printf("%d", number); // nu

    return 0;
    
}