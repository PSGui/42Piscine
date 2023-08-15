/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:37:19 by gsaladri          #+#    #+#             */
/*   Updated: 2023/08/06 15:37:20 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (argc > 1)
		{
			while (argv[argc - 1][j] != '\0')
			{
				j++;
			}
			write(1, argv[argc - 1], j);
			write(1, "\n", 1);
			argc--;
			j = 0;
		}
	}
	return (0);
}
