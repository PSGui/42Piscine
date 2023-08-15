#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	size;

	i = 0;
	if (min >= max)
	{
		arr = 0;
		return (arr);
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
	return (arr);
}

/*
#include <stdio.h>

int	main()
{
	int *range;
	int	i;

	i = 0;
	range = ft_range(7, 5);
	if (range)
	{
		while(i < 13)
		{
			printf("%d ", range[i]);
			i++;
		}
		free(range);
	}
	return (0);
}
*/
