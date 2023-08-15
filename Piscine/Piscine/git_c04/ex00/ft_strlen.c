/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:26:11 by gsaladri          #+#    #+#             */
/*   Updated: 2023/08/02 13:26:13 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	a[] = "ABC";

	printf("%lu\n", strlen(a));
	printf("%d\n", ft_strlen(a));
	
	char	b[] = "";

	printf("%lu\n", strlen(b));
	printf("%d\n", ft_strlen(b));
	
	char	c[] = "\0";

	printf("%lu\n", strlen(c));
	printf("%d\n", ft_strlen(c));
	
	char	d[] = "123456789\n";

	printf("%lu\n", strlen(d));
	printf("%d\n", ft_strlen(d));
}*/
