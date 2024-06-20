#include <stdio.h>

// Function to swap the values of two integers
void ft_swap(int *a, int *b)
{
    int tmp;  // Temporary variable to hold one of the values during the swap
    tmp = *a; // Store the value of 'a' in 'tmp'
    *a = *b;  // Copy the value of 'b' into 'a'
    *b = tmp; // Copy the value of 'tmp' (original 'a') into 'b'
}

// Test
int main()
{
    int x; // Declare an integer x
    int y; // Declare an integer y

    x = 2; // Initialize x to 2
    y = 3; // Initialize y to 3

    ft_swap(&x, &y); // Call ft_swap with addresses of x and y
    printf("%d\n", x); // Print the new value of x (should be 3)
    printf("%d", y);   // Print the new value of y (should be 2)

    return 0; // Return 0 to indicate successful completion
}
