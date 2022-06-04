#include <stdio.h> 
int main() 
{
	int	a;
	int	b;
	a = 0;
	b = 0;

	a = ++b + ++b;
	printf("a = %d | b = %d\n", a, b);

	return 0; 
}
