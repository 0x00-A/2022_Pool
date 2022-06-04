#include<unistd.h>
#include<stdio.h>
void	printc(char c);
void ft_print_comb(void)
{
	int a,b;
	a=0;
	while(a<99)
	{
		b=a+1;
		while(b<=99)
		{
			//printf("%d%d%d%d",a/10,a%10,b/10,b%10);

			printc(a/10+'0');
			printc(a%10+'0');
			printc(b/10+'0');
			printc(b%10+'0');

			if(!(a==98 && b==99))
				{
					printc(',');
					printc(' ');
				}
			b++;
		}
		a++;
	}

}
int	main()
{
	ft_print_comb();
	return 0;}

void	printc(char c)
{
	write(1, &c, 1);
}
