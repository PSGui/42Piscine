/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:40:04 by gsaladri          #+#    #+#             */
/*   Updated: 2023/08/03 15:40:07 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}

/*
#include <stdio.h>

int 	main()
{
	int	a = 0;

	printf("%d\n", ft_iterative_factorial(a));
	
	int	b = 5;

	printf("%d\n", ft_iterative_factorial(b));
	
	int	c = 6;

	printf("%d\n", ft_iterative_factorial(c));
	
	int	d = 344;

	printf("%d\n", ft_iterative_factorial(d));
}
*/
