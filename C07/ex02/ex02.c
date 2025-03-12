#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max){

	int	i;

	i = 0;
	if (min >= max)
		return (0);
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
