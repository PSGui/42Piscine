/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:44:58 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/23 21:45:07 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_temp;
	int	mod_temp;

	div_temp = *a / *b;
	mod_temp = *a % *b;
	*a = div_temp;
	*b = mod_temp;
}

/*#include <stdio.h>
int	main()
{
	int	x;
	int	y;

	x = 30;
	y = 5;

	printf("Antes: x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("Depois: x = %d, y = %d\n", x, y);
	return 0;
}*/
