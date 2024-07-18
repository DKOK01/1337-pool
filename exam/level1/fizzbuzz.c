#include <unistd.h>

void ft_putnbr(int i)
{
	char c;
	if (i > 9)
	{
		ft_putnbr(i / 10);
	}
	c = (i % 10) + '0';
	write(1, &c, 1);
}

int main(void)
{
	int i = 1;
	while (i <= 100)
	{
		if (((i % 5) == 0) && ((i % 3) == 0))
		{
			write(1, "fizzbuzz", 8);
			write(1, "\n", 1);
		}
		else if ((i % 5) == 0)
		{
			write(1, "buzz", 4);
			write(1, "\n", 1);
		}
		else if ((i % 3) == 0)
		{
			write(1, "fizz", 4);
			write(1, "\n", 1);
		}
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return 0;
}
