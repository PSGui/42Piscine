/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:41:17 by gsaladri          #+#    #+#             */
/*   Updated: 2023/08/03 15:41:19 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;
	int	i;

	i = 1;
	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		nb *= temp;
		i++;
	}
	return (nb);
}

/*
#include <stdio.h>

int 	main()
{
	int	a = 0;
	int	power = 0;

	printf("%d\n", ft_iterative_power(a, power));
}
*/
