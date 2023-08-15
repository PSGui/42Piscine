/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:36:40 by gsaladri          #+#    #+#             */
/*   Updated: 2023/08/07 17:36:42 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (0 < power)
	{
		res = ft_recursive_power(nb, power - 1);
		res *= nb;
	}
	return (res);
}

/*
#include <stdio.h>

int 	main()
{
	int	a = 0;
	int	power = 0;

	printf("%d\n", ft_recursive_power(a, power));
}*/
