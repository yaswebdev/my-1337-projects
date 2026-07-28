#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 1;

	if(nb < 0)
		return 0;

	while((long)i * i <=  nb){
		if((long)i * i == nb)
			return i;
		i++;
	}
	return 0;
}

int main(){
	printf("%d", ft_sqrt(90));
}
