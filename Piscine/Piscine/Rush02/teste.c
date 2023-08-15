#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX_BUFFER 100

char	ft_write(char *c) // Escrever caracteres passados para esta funcao
{
	write(1, &c, 1);
}

int	ft_strlen(char *str) // Funcao strlen para verificar o numero de caracteres que a string tem
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2) // Funcao strcmp para ficar se duas strings sao iguais ou nao
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_atoi(char *str) // Funcao atoi para traduzir os numeros que sao passados por parametros em integers
{
	int	i;
	int	sinal;
	int	num;

	i = 0;
	sinal = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	if (!(sinal % 2))
		return (num);
	return (num *= -1);
}

char	ft_opentxt() // Funcao para abrir o ficheiro de texto "numbers.dict" que vamos comparar ao parametro
{
	int	opn;
	int	rd;
	char	buffer[MAX_BUFFER];

	opn = open("numbers.dict", O_RDONLY);
	if (opn == -1)
	{
		write(1, "Error", 5);
		return 0;
	}
	rd = read(opn, buffer, MAX_BUFFER);
	if (rd == -1)
	{
		write(1, "Error", 5);
		close(opn);
		return 0;
	}
	buffer[rd] = '\0';
	return (*buffer);
}

int	ft_comparar(char *file, char *parameter) // Funcao para comparar o parametro com as linhas da string. Aqui faz-se um while ate que cheguemos ao fim do ficheiro ou a string seja encontrada
{
	char	texto;
	int	opn;

	opn2 = open("numbers.dict", O_RDONLY);
	if (opn2 == -1)
	{
		write(1, "Error", 5);
		return (0);
	}
	buffer = ft_opentxt();
	while (fgets(buffer, MAX_BUFFER, opn2) != NULL)
	{
		if (ft_strcmp(buffer, ft_argv() == 0)
			return (1);
	}
	return (0);
}

char	ft_argv(char *str) 
{
	return (*str);
}

char	ft_writeaftercmp() // Caso ft_comparar retorne 1 entao aqui vemos a palavra que existe a frente do numero e escrevemos
{
	char	texto;

	texto = ft_opentxt();
	
}

int	main(int argc, char *argv[])
{
	int	i;
	int	nbr;

	ft_argv(argv[1]);
	i = 0;
	if(argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		while (nbr > 10) 
		{
			
		}
	}
	if (argc == 3)
	{
}	
	}
	return 0;
}
