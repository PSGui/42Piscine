/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:26:15 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/27 18:26:22 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lenghtstr(char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	t;

	i = 0;
	t = lenghtstr(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (t);
}

/*#include <stdio.h>
int	main()
{
	char	a[] = "Bacalhau Ze do Pipo";
	char	buff[24];
	int	size = 3;
	int	r;

	r = ft_strlcpy(buff, a, size);
	printf("Foi copiado '%s' para '%s', size %d\n", a, buff, r);
}*/
