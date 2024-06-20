#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

// Test
int main()
{
	int x;
	int y;

	x = 4;
	y = 8;

	ft_ultimate_div_mod(&x, &y);

	printf("the result of a / b = %d\n", x);
	printf("the result of a %% b = %d\n", y);

	return 0;
}