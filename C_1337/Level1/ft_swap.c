// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);


#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

// test
// int main()
// {
//     int x;
//     int y;

//     x = 4;
//     y = 8;

//     ft_swap(&x, &y);

//     printf("the value of x %d\n", x);
//     printf("the value of y %d\n", y);

//     return 0;
// }

// valide ()