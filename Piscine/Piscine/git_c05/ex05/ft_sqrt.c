/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:37:04 by gsaladri          #+#    #+#             */
/*   Updated: 2023/08/07 17:37:06 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	n = nb;
	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb >= 2)
	{
		while (i * i <= n)
		{
			if ((i * i) == n)
				return (i);
			i++;
		}
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(23));
	printf("%d\n", ft_sqrt(144));
	printf("%d\n", ft_sqrt(345));
	printf("%d\n", ft_sqrt(2147395600));
}
*/
