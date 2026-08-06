#include <unistd.h>


void putchar(char c)
{
	write(1, &c, 1);
}

int putnbr(int nb)
{
	if(nb = -2147483648)
	{
		write(1, "2147483648", 11);
	}

	if(nb < 0)
	{
		putchar('-');
		nb = -nb;
	}

	if(nb > 9)
		putnbr(nb / 10);
	putchar((nb % 10) + '0')
}


int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        {
                i++;
	}

	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return (result * sign);
}
