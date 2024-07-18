
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}
#include <stdio.h>

int main()
{
	char *str = "hello hi ho";
	printf("%d", ft_strlen(str));
}
