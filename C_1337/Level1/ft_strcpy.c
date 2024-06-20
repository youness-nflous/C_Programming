// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);

#include <stdio.h>

// The type char * means "pointer to a character". This allows
//  the function to access and modify the characters in the string

char    *ft_strcpy(char *dst, const char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst = '\0';
    return dst;  
}

int main()
{
    char src[] = "Hello World!";
    char dst[13];

    ft_strcpy(dst, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);

    return 0;

}

// valide(True)