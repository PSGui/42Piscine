/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 04:04:21 by gsaladri          #+#    #+#             */
/*   Updated: 2023/08/09 04:04:23 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	escrever(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			escrever('-');
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		escrever(nb % 10 + '0');
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putnbr(par[i].size);
		escrever('\n');
		ft_putstr(par[i].str);
		escrever('\n');
		ft_putstr(par[i].copy);
		escrever('\n');
		i++;
	}
}


char	*ft_strdup(char *src)
{
	int	i;
	int	j;
	char	*size;
	char	*dest;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	size = malloc(i + 1 * sizeof(char));
	dest = size;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (size);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}



struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;

	i = 0;
	struct s_stock_str *strings;

	strings = malloc((ac + 1) * sizeof(struct s_stock_str));
	if(!strings)
		return(NULL);
	while (i < ac)
	{
		strings[i].size = ft_strlen(av[i]);
		strings[i].str = av[i];
		strings[i].copy = ft_strdup(av[i]);
		i++;
	}
	strings[i].size = 0;
	strings[i].str = 0;
	strings[i].copy = 0;
	return(strings);
}




int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	struct s_stock_str *arr = ft_strs_to_tab(argc, argv);
	
	ft_show_tab(arr);
	return (0);
}
