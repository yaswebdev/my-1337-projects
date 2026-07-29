#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int len = 0;
	unsigned int i = 0;

	while(dest[len])
	{
		len++;
	}

	while(i < nb && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return (dest);
}
