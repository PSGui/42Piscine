/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:49:01 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/25 17:49:04 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <unistd.h>
int	main()
{
	char	src[] = "Guilherme";
	char	dest[255];
	unsigned int	n;
	
	n = sizeof(dest) - 1;
	write(1, ft_strncpy(dest, src, n), n);
	return (0);
}*/
