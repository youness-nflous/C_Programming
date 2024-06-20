#include <unistd.h>

void ft__print__alphabet(void){

    // ASCII Table
    // a == 97
    // z == 122

    int i = 97;

    while (i <= 122)
    {
        write(1, &i, 1);
        i++;
    }
    
}

// Test
int main(){

    ft__print__alphabet();

    return 0;
}