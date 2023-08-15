/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:08:56 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/30 16:08:59 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int	main()
{
	char	s1[] = "Guilherme";
	char	s2[] = "Guilherme";
	
	if (ft_strcmp(s1, s2) < 0)
		printf("Numero ascii menor na s1 do que s2: %d\n", ft_strcmp(s1, s2));
	else if (ft_strcmp(s1, s2) > 0)
		printf("Numero ascii maior na s1 do que s2: %d\n", ft_strcmp(s1, s2));
	else
		printf("As strings sao iguais: %d", ft_strcmp(s1, s2));
}*/
