/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:03:36 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/25 13:03:39 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

/*#include <stdio.h>
int	main(void)
{
	char	src[20] = "Guilherme";
	char	dest[20] = "Muda ou nao";

	printf("%s\n", dest);
	printf("%s", ft_strcpy(dest, src));
	return (0);
}*/
