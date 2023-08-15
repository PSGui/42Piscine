/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:47:41 by gsaladri          #+#    #+#             */
/*   Updated: 2023/08/02 21:47:43 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
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

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	char	a[] = "";
	
	printf("%d\n", ft_atoi(a));
	
	char	b[] = "+1234ab567";
	
	printf("%d\n", ft_atoi(b));
	
	char	c[] = "+-1234ab567";
	
	printf("%d\n", ft_atoi(c));
	
	char	d[] = "---12346b567";
	
	printf("%d\n", ft_atoi(d));
	
	char	e[] = "a234ab567";
	
	printf("%d\n", ft_atoi(e));
}
