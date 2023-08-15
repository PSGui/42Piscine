/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:50:33 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/24 17:50:35 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	aux;

	i = 0;
	f = size;
	while (i < f)
	{
		aux = tab[i];
		tab[i] = tab[f - 1];
		tab[f - 1] = aux;
		i++;
		f--;
	}
}

/*#include <stdio.h>
void	print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int	main()
{
	int	a[] = {1, 2, 3, 4};
	int	tamanho_a = sizeof(a) / sizeof(a[0]);

    	ft_rev_int_tab(a, tamanho_a);
    	print_array(a, tamanho_a);
}*/
