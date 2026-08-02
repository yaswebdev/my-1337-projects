#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{

	int i = 0;
	int len;

	if(min >= max)
        {
                *range = NULL;
                return 0;
        }

	len = max - min;

	*range = malloc(sizeof(int) * len);


	if(*range == NULL)
	{
                return (-1);
        }

	while(min < max){
		(*range)[i] = min;
		i++;	
		min++;
	}

	return (len);
}
