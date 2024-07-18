int ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i;
	char *dest;
	int len;

	len = ft_strlen(src);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return NULL;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;

}
#include <stdio.h>

int main()
{
	char *str = "hello hi ho";
	printf("%s", ft_strdup(str));
}
