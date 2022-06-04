#include<unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char c = 'z';
	do
	{
	write(1, &c, 1);
	c--;
	}
	while(c <= 'a');
}
