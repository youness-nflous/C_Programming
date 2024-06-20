// Assignment name  : aff_first_param
// Expected files   : aff_first_param.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes strings as arguments, and displays its first
// argument followed by a \n.

// If the number of arguments is less than 1, the program displays \n.

// Example:

// $> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
// vincent$
// $> ./aff_first_param "j'aime le fromage de chevre" | cat -e
// j'aime le fromage de chevre$
// $> ./aff_first_param
// $


#include <unistd.h>

void print(char c)
{
    write(1, &c, 1);
}

char aff_first_param(char *str){

    int i;

    i = 0;
    while (str[i] != '\0')
    {
        print(str[i]);
        i++;
    }
    print('\n');
    // return (*str);
}

int main(int argc, char **argv)
{
    if (argc >= 2){
        aff_first_param(argv[1]);
    }
    else
    {
        print('\0');
    }
    return 0;
}

