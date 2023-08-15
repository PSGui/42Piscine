/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 04:03:38 by gsaladri          #+#    #+#             */
/*   Updated: 2023/08/09 04:03:40 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*strings;

	i = 0;
	strings = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!strings)
		return (NULL);
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
	return (strings);
}

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	i;
	struct s_stock_str *arr = ft_strs_to_tab(argc, argv);

	i = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			printf("Size: %d, Str: %s, Copy: %s\n", arr[i].size, arr[i].str, arr[i].copy);
			i++;
		}
		free(arr);
	}
	return (0);
}
*/
