#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int len(char *s)
{
	int i;
	i = 0;
	while(s[i])
	   i++;
	return (i);	
}
int storage(char **toks)
{
	int len_;
	int i;

	i = 0;
	len_ = 0;

	while (toks[i])
		len_ += len(toks[i++]);

	return (len_ + 1 + i - 1);
}

char *ft_join(char **toks, int len_)
{
	int i = 1;
	int k = 0;
	int j = 0;

	int s = storage(toks);
	char *str = malloc(s);

	while (i < len_)
	{
		j = 0;
		while (toks[i][j])
			str[k++] = toks[i][j++];
		if (i !=  len_ - 1)
			str[k++] = ' ';	
		i++;
	}
	str[k] = 0;
	return (str);
}

int main(int ac, char **av)
{
	
	char *p = ft_join(av, ac);
	for (int i = 0; i < len(p); i++)
	{
		if (((i + 1) % 5 == 0) && ((i + 1) % 3 == 0))
		{
			printf("5");
		}
		else if ((i + 1) % 5 == 0)
		{
			printf("3");
		} else if ((i + 1) % 3 == 0)
		{
			printf("5");
		} else {
			printf("%c", p[i]);
		}
	}
	printf("\n");

	return 0;
}
