#include<unistd.h>
void	ft_is_negative(int n)
{
	char N='N',
	     P='P';
	n<0? write(1, &N, 1): write(1, &P, 1);

}
