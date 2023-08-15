#include <unistd.h>

void	escrever(char c)
{
	write(1, &c, 1);
}

char	repeat_alpha(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			nb = str[i] - 65;
			while (nb >= 0)
			{
				escrever(str[i]);
				nb--;
			}
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			nb = str[i] - 97;
			while (nb >= 0)
			{
				escrever(str[i]);
				nb--;
			}
		}
		else
			escrever(str[i];
		i++;
	}
	escrever('\n');
	return (*str);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	else
	{
		escrever('\n');
	}
	return (0);
}
