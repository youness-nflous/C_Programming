#include <unistd.h>

void ft__print__reverse__alphabet(){

    int num = 122;

    while (num >= 97)
    {
        write(1, &num, 1);
        num--;
    }    
}


// test
int main(){

    ft__print__reverse__alphabet();

    return 0;
}