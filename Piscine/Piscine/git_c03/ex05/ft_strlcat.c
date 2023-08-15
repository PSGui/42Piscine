/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:16:35 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/30 23:16:37 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	tamanho_total(char *src, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		j++;
	}
	return (i + j);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	t;

	t = tamanho_total(src, dest);
	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	if (!size || size <= j)
		return (size + ft_strlen(src));
	while (i + j + 1 < size && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[i + j] = '\0';
	return (t);
}

/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	dest[15] = "Guilherme";
	char	src[] = "Saladrigas";
	int	sizesrc = sizeof(src);
	int	sizedest = sizeof(dest);

	printf("Dest = %s\n", dest);
	printf("Src = %s\n", src);
	printf("Numero de caracteres que a src tem = %d\n", sizesrc);
	printf("Numero de caracteres total que a dest tem = %d\n", sizedest);
	printf("Tentou copiar %d caracter\n", ft_strlcat(dest, src, 0));
	printf("No entanto so concatenou: %s\n", dest);
}
*/
