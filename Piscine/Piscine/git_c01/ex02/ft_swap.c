/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:03:14 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/23 18:03:17 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>
int	main()
{
	int	x;
	int	y;

	x = 2;
	y = 3;

	printf("Antes: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Depois: x = %d, y = %d\n", x, y);
	return 0;
}*/
