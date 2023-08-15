#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	size;

	i = 0;
	if (max > 2147483647 || min > 2147483647)
		return (0);
	if (max < -2147483648 || min < -2147483648)
		return (0);
	if (min >= max)
	{
		arr = 0;
		return (*arr);
	}
	else
	{
		size = max - min;
		arr = malloc(size * sizeof(int));
		while (i < size)
		{
			arr[i] = min;
			min++;
			i++;
		}
	}
	*range = arr;
	return (i);
}

/*
#include <stdio.h>

int	main()
{
	int	*range = 0;

	printf("%d", ft_ultimate_range(&range, 10, 20));
	return (0);
}
*/
