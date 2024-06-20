#include <unistd.h>

void ft__print__numbers(void){

    // NUM to ASCII
    // 0 == 48
    // 9 == 57

    int n = 48;

    while (n <= 57)
    {
        write(1, &n, 1);
        n++;
    }
}

// test
int main(){

    ft__print__numbers();

    return 0;
}