void	ft_subtract(int a, int *ptr)
{
	*ptr = *ptr - a ;
}
#include <stdio.h>
int main ()
{
int x = 5; 
int *ptr;
*ptr = 5;
ft_subtract(x, ptr);
printf("%d",*ptr);
return 0;
}
