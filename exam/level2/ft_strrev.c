int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

char    *ft_strrev(char *str)
{
	int i;
	int len;
	char temp;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len-1] = temp;
		i++;
		len--;
	}
	return str;
}
#include <stdio.h>
int main()
{
	char str[] = "hello hi ho";
	printf("%s", ft_strrev(str));

}
