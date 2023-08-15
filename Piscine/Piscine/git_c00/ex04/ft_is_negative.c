/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:52:17 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/19 20:52:20 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	option;

	if (n < 0)
	{
		option = 'N';
	}
	else
	{
		option = 'P';
	}
	write(1, &option, 1);
}

/*int	main()
{
	int	a;
	a = -1;
	ft_is_negative(a);
	return 0;
}*/
