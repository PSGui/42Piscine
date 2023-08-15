/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:20:15 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/30 21:20:17 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	comparar(char *str, char *to_find)
{
	while (*to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if (((*str == *to_find) && comparar(str, to_find))
			|| to_find[0] == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	char	a[] = "encontra a string sff";
	char	b[] = "fire";
	char	c[] = "encontrA";

	printf("%s\n", ft_strstr(a, b));
	printf("%s\n", ft_strstr(a, c));
}
*/
