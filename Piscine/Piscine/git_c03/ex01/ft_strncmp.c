/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:09:05 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/30 16:09:07 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]) && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int	main()
{
	char	s1[] = "Guilherme";
	char	s2[] = "Guilherme";
	int	n = 7;
	
	if (ft_strncmp(s1, s2, n) < 0)
		printf("Ascii menor na s1: %d\n", ft_strncmp(s1, s2, n));
	else if (ft_strncmp(s1, s2, n) > 0)
		printf("Ascii maior na s1: %d\n", ft_strncmp(s1, s2, n));
	else
		printf("As strings sao iguais %d", ft_strncmp(s1, s2, n));
}*/
