/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:27:57 by gsaladri          #+#    #+#             */
/*   Updated: 2023/07/26 18:28:00 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	controlo_qualidade(char *str, int i)
{
	char	ant;
	char	atual;
	int		flag1;
	int		flag2;

	if (i == 0)
	{
		return (0);
	}
	ant = str[i - 1];
	atual = str[i];
	flag1 = (ant >= 0 && ant <= 47) || (ant >= 58 && ant <= 64);
	flag2 = (atual >= 97 && atual <= 122);
	return (flag1 && flag2);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 97 && str[0] <= 122)
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if (controlo_qualidade(str, i))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char	a[] = "ola, tudo bem? 42palAvras\nquarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(a);
	printf("%s\n", a);
	
	char	b[] = "48ola, tudo bem? 42palAvras\nquarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(b);
	printf("%s\n", b);
	
	char	c[] = "Ola, tudo bem? 42palAvras\nquarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(c);
	printf("%s\n", c);
	return (0);
}*/
