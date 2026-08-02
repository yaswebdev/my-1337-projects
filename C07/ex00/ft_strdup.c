#include <stdlib.h>

char *ft_strdup(char *src)
{
	int len = 0;
	int i = 0;
	char *dest;

	while(src[len])
	{
		len++;
	}

	dest = malloc(sizeof(char) * (len + 1));

	if(dest == NULL)
	{
		return (NULL);
	}

	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
