/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:26:29 by gsaladri          #+#    #+#             */
/*   Updated: 2023/08/02 13:26:32 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int	main()
{
	char	a[] = "Gui";
	ft_putstr(a);
	char	b[] = "abc";
	ft_putstr(b);
	char	c[] = "";
	ft_putstr(c);
	char	d[] = "123";
	ft_putstr(d);
}*/
