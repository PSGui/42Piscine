#include <unistd.h>

void	escrever(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
			escrever(str[i]);
			i++;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			escrever(str[i]);
			i++;
		}
		else
		{
			escrever(str[i]);
			i++;
		}
	}
}
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ulstr(argv[1]);
	}
	escrever('\n');
	return (0);
}
