#include<unistd.h>
#include<stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if(nb == -2147483648)
	{
		ft_putchar('2');
		nb = 147483648;
	}
	int	temp;
	int	size;
	size = 1;
	temp = nb;
	while((temp/=10) > 0)
	{
		size *= 10;
	}
	while(size>0)
	{
		ft_putchar(nb/size + '0');
		nb %= size;
		size /= 10;
	}
}


int	main()
{
	int n;
	scanf("%d", &n);
	ft_putnbr(n);
	return 0;
}
