#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

// Test
int	main()
{
	int a;
	int b;
	int x;
	int y;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &x, &y);
	printf("%d\n", x);
	printf("%d\n", y);

    return 0;
}