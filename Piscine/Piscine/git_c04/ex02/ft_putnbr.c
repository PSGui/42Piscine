/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:26:40 by gsaladri          #+#    #+#             */
/*   Updated: 2023/08/02 13:26:43 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escrever(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			escrever('-');
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		escrever(nb % 10 + '0');
	}
}

#include <stdio.h>
int	main()
{
	int	a = 10;
	int	b= 0;
	int	c = 9;
	int	d = 2147483647;

	ft_putnbr(a);
	printf("\n");
	ft_putnbr(b);
	printf("\n");
	ft_putnbr(c);
	printf("\n");
	ft_putnbr(d);
}
