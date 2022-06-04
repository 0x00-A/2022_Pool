#include<unistd.h>
void	ft_print_numbers(void)
{
	char c = '0';
	do
	{
	write(1, &c, 1);
	c++;
	}
	while(c <= '9');
}
