#include<unistd.h>
void	ft_print_alphabet(void)
{
	char c = 'a';
	do
	{
	write(1, &c, 1);
	c++;
	}
	while(c <= 'z');
}
