#include <unistd.h>
#include <stdio.h>


void ft_putstr(char *str)
{
    // str = "hello"

    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);

        // to see the address
        // printf("the address of %p\n", &str[i]);

        i++;
    }
}

// Test
int main()
{
    char *ch = "hello";
    
    // Address:  0x1000  0x1001  0x1002  0x1003  0x1004  0x1005
    // Content:   'h'    'e'     'l'     'l'     'o'     '\0'

    // Here, c points to the address 0x1000, where the character 'h' is stored.

    ft_putstr(ch);
}