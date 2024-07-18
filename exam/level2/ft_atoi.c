int	ft_atoi(const char *str)
{
	int i;
	int s;
	int result;

	result = 0;
	s = 1;
	i = 0;

	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			s = s * (-1);
		}
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return (result*s);
}
/*
#include <stdio.h>
#include <stdlib.h>
void test_atoi(const char *str) 
{
	printf("\n-----\n");
	printf("\nstr: \"%s\"", str);
	printf("\n atoi: %d -- ft_atoi: %d", atoi(str), ft_atoi(str));
	printf("\n");
}
int main()
{
	test_atoi("123");
	test_atoi("-456");
	test_atoi("-2147483648");
	test_atoi("2147483647");
	test_atoi("0");

	test_atoi("            123");
	test_atoi("--+++++-456");
	test_atoi("    -2147483648");
	test_atoi(" 	--++2147483647");
	test_atoi("      -+-+-+0");

	test_atoi("123    ");
	test_atoi("-456      ww");
	test_atoi("-2147483648			-123");
	test_atoi("2147483647 312jk321");
	test_atoi("0 9321ssaeqw");

	test_atoi(" ");
	test_atoi("------+++++");
	test_atoi("-");
	test_atoi("abc 90");
	test_atoi("");

	test_atoi("b123");
	test_atoi("   -456    ");
	test_atoi("-2a147483648");
	test_atoi("bbbbbb2ggggggg");
	test_atoi("-------0 -1");
}
*/
