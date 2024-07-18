#include <stdio.h>

int ft_occ_a( char *str)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'A')
		{
			a++;
		}
		i++;
	}
	return a;
}
int main()
{
	char	*str = "helloAAA";
 	printf("%d",ft_occ_a(str));
	return 0;

}
