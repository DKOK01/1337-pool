#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	int i;

	i = 0;
	while (av[1][i] != '\0')
	{
		write(1, &av[1][i], 1);
		if (av[1][i+1] != '\0')
			write(1, "   ", 3);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
