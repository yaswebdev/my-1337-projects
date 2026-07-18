#include <unistd.h>


void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}


int	ft_strlen(char *str)
{

	int i;

        i = 0;



        while (str[i] != '\0'){
                i++;
        }

        ft_putnbr(i);
}

int main(){

        char *c;
        c = "Hello World";

        ft_strlen(c);
        return 0;
}
