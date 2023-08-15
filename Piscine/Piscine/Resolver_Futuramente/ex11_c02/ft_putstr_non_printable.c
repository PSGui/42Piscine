-/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:26:29 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/27 18:26:31 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	tamanho_swap(char *str)
{
	int	i;
	int	j;
	char temp;
	
	i = 0;
	j = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	while(j < i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

void	dec_hexa(char *str) // Funcao chamada na principal 
{
	char	a[10];
	char	ch;
	int	resto;
	int	i;
	int	temp;

	i = 0;
	while(*str != '\0')
	{
		resto = *str;
		while (resto != 0) 
		{
			temp = resto % 16;
			if (resto < 10)
				ch = temp + '0';
			else
				ch = resto + 'A' - 10;
			a[i++] = ch;
			resto /= 16;
		}
		tamanho_swap(a);
		str++;
	}
}

void	ft_putstr_non_printable(char *str) // Funcao principal que verifica um a um cada char. Se o char for imprimivel entao printf desse char, caso contrario passa para a funcao dec_hexa 
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] != 127)
		{
			printf("%c", str[i]);
		}
		else
		{
			dec_hexa(&str[i]);
		}
		i++;
	}
}

int	main() // Main onde e chamada uma string 'a' que depois passa pela funcao principal e muda (em principio)
{
	char	a[] = "Ola\ntudo bem?";

	printf("Antes: %s", a);
	ft_putstr_non_printable(a);
	printf("Depois: %s", a);
	return (0);
}


