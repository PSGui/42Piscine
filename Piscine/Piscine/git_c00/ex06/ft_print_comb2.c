/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 23:16:00 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/21 00:08:02 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char z)
{
	write(1, &z, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write('0' + a / 10);
			ft_write('0' + a % 10);
			ft_write(' ');
			ft_write('0' + b / 10);
			ft_write('0' + b % 10);
			if (!(a == 98 && b == 99))
			{
				ft_write(',');
				ft_write(' ');
			}
			b++;
		}
		a++;
	}
}

/*int main()
{
	ft_print_comb2();
	return 0;
}
*/
