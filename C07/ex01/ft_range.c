#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *range;
	int len;
	int i;


	if(min >= max)
	{
		return NULL;
	}

	len = max - min;

	range = malloc(sizeof(int) * len);

	if(range == NULL)
	{
		return NULL;
	}

	i = 0;
	while(i < len)
	{
		range[i] = min;
		min++;
		i++;
	}

	return (range);
}


int	main(void)
{
	int *tab;
	int i;
	int min;
	int max;

	min = 3;
	max = 8;

	tab = ft_range(min, max);

	if (tab == NULL)
	{
		printf("Allocation failed or min >= max\n");
		return (1);
	}

	i = 0;
	while (i < (max - min))
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

	free(tab);

	return (0);
}
