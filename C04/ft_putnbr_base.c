#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *base)
{
	int len = 0;
	while(base[len])
	{
		len++;
	}

	return len;
}

int check_base(char *base)
{
	int i;
	int j;
	int len;

	len = ft_strlen(base);

	if(len < 2)
	{
		return 0;
	}

	i = 0;
	while(i < len)
	{
		if(base[i] == '+' || base[i] == '-')
		{
			return 0;
		}

		j = i + 1;
		while(j < len)
		{
			if(base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}

	return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
	int len;

	if(!check_base(base))
	{
		return ;
	}

	len = ft_strlen(base);

	if(nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(-(nbr / len), base);
		ft_putchar(base[-(nbr % len)]);
		return ;
	}

	if(nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	
	if(nbr >= len)
	{
		ft_putnbr_base(nbr / len, base);
	}
	ft_putchar(base[nbr % len]);
}
