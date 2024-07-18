char *ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	while(dest[i])
		i++;
	while(src[i])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return dest;
}
#include <unistd.h>

int main(int ac, char **av)
{

	int arr[256] = {0};
	int i = 0;
	char *str;
	str = ft_strcat(av[1],av[2]);
	if ( ac == 3)
	{
		while (str[i] != '\0')
		{
			if (arr[str[i]] == 0 )
			{
				arr[str[i]] = 1;
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
