#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	int result = 1;

	if(nb < 0)
		return 0;
	if(nb == 0 || nb == 1)
		return 1;
	if(nb > 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}

	return result;
	
}

int main()
{
	int res = ft_recursive_factorial(5);
	printf("%d", res);
}
