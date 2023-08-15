/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:05:23 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/23 23:05:29 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*#include <unistd.h>
int main()
{
	char	texto[] = "Guilherme";
	int	count;
	char	temp;
	
	count = ft_strlen(texto);
	temp = count + '0';
	write(1, &temp, 1);
}*/
