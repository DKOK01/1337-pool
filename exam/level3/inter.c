#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 3)
	{
		int arr[256] = {0};
		int i = 0;
		int j = 0;
		char *str1 = av[1];
		char *str2 = av[2];
		while (str1[i])
		{
			j = 0;
			while (str2[j])
			{
				if (str2[j] == str1[i] && arr[str1[i]] == 0)
				{
					arr[str1[i]] = 1;
					write(1, &str1[i], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
