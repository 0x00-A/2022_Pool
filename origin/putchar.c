#include<unistd.h>
void	printc(char c);
int main()
{
	int c = 9;

	printc(c+'0');


	return 0; }

void	printc(char c)
{
	write(1, &c, 1);
}
