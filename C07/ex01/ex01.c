#include <stdlib.h>

int	*ft_range(int min, int max){

	int		*dest;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	dest = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
