#include <stdlib.h>

char	*ft_strdup(char *src){

	char	*dest;
	int		len;
	int		i;

	len = 0;
	i = 0;
	if (!src || *src == '\0')
		return (NULL);
	while (src[len])
		len++;
	dest = (char *)malloc((len + 1) * sizeof(char));
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
