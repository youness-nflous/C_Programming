#include <unistd.h>

// $>./search_and_replace "Papache est un sabre"     "a"    "o"
//            index               index             index  index
//              0                   1                 2      3

int main(int argc, char *argv[])
{
    int i = 0; // Initialize the variable i
    
    argc = 4;

    if (argc == 4) // Check if the number of arguments is 4
    {
        // In C, the null terminator '\0' has the integer value 0. Therefore
        // !'\0' (which is !0) evaluates to 1 (true).
        // If argv[2][1] is '\0', !argv[2][1] evaluates to 1 (true).

        if (!argv[2][1] && !argv[3][1])         // Check if the second and third arguments are single characters
        {
            while (argv[1][i] != '\0')                  // Loop through each character of the first argument (string)
            {
                if (argv[1][i] == argv[2][0])   // If the current character matches the search character
                    write(1, &argv[3][0], 1);   // Write the replacement character to stdout
                else
                    write(1, &argv[1][i], 1);   // Write the current character to stdout if it does not match the search character
                i++;                            // Increment the index
            }
        }
    }
    write(1, "\n", 1);                          // Write a newline character to stdout
    return (0);                                 // Return 0 to indicate successful execution
}
