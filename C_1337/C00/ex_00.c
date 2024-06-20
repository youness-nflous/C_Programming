#include <unistd.h>

// function that displays the character passed as a parameter
void ft__putchar(char c){
    write(1, &c, 1); // 1 is the file descriptor for standard output
}

// test
int main()
{
    ft__putchar('f');
    return 0;
}
