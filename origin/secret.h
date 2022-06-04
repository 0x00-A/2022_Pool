#include<stdio.h>
#include<unistd.h>
void	off_bin(int a)
{
	static int i=0;
		if(i++ == 8)
		{
			return;
		}
		else
		{
			off_bin(a/2);
			printf("%d", (a%2));
			return;
		}

}

void    ft_putchar(char c)
{

        write(1, &c, 1);
}
