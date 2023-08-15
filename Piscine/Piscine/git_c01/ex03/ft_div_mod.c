/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:26:05 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/23 18:26:08 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	div_temp;
	int	mod_temp;

	div_temp = a / b;
	*div = div_temp;
	mod_temp = a % b;
	*mod = mod_temp;
}

/*#include <stdio.h>
int	main()
{
	int	a;
	int	b;
	int	div_res;
	int	mod_res;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &div_res, &mod_res);
	
	printf("O resultado da divisao e: %d\n", div_res);
	printf("O resultado do resto a divisao e: %d", mod_res);
}*/
