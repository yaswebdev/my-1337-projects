#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int len = 0;

	while(str[len])
	{
		len++;
	}

	return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int total_len;
	int i;
	int j;
	int k;
	char *dest;


	if (size == 0)
	{
		dest = malloc(1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';

		return (dest);
	}

	total_len = 0;
	i = 0;
	while(i < size)
	{
		total_len = total_len + ft_strlen(strs[i]);
		i++;
	}

	total_len += (size - 1) * ft_strlen(sep);

	dest = malloc(sizeof(char) * total_len + 1);

	if(dest == NULL)
	{
		return 0;
	}

	i = 0;
	k = 0;
	while(i < size)
	{
		j = 0;
		while(strs[i][j])
		{
			dest[k] = strs[i][j];
			k++;
			j++;
		}

		if(i < size - 1)
		{
			j = 0;
			while(sep[j])
			{
				dest[k] = sep[j];
				k++;
				j++;
			}
		}
		i++;
	}
	dest[k] = '\0';

	return (dest);
}
