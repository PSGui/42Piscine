#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	j;
	char	*size;
	char	*dest;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	size = malloc(i + 1 * sizeof(char));
	dest = size;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (size);
}

/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	a[] = "Guilherme";
	char	b[] = "Guilherme";

	printf("Funcao original: %s\n", strdup(a));
	printf("Funcao 42: %s", ft_strdup(b));
}
*/
