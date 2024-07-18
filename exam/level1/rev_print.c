#include <unistd.h>

int ft_strlin(char *str)
{
	int i;

	i = 0;
	while ( str[i] != '\0')
	{
		i++;
	}
	return i;
}

int main(int ac, char **av)
{
	int i;
	int s;
	if (ac == 2)
	{
		s = ft_strlin(av[1]);
		i = s - 1;
		while (i >= 0)
		{
			write(1, &av[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return 0;
}
