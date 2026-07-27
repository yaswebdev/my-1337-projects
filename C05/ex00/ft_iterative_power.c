#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int result;
	int i;
	if(power < 0)
		return 0;
	if(power == 0)
		return 1;
	result = 1;
	i = 0;
	while (i < power){
		result = result * nb;
		i++;
	}

	return result;
}

int main()
{
	printf("%d", ft_iterative_power(2, 3));
}
