#include <unistd.h>

char *ft_strcapitalize(char *str);

char *ft_strlowercase(char *str)
{
	int i = 0;

        while(str[i] != '\0')
        {
                if(str[i] >= 'A' && str[i] <= 'Z')
                {
                        str[i] += 32;
                }
                i++;
        }

        return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start_word;

	i = 0;
	start_word = 1;
	ft_strlowercase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && start_word)
		{
			str[i] -= 32;
			start_word = 0;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			start_word = 0;
		}
		else
		{
			start_word = 1;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	int		i;
	char	*p;

	i = 0;
	p = ft_strcapitalize(str);
	while (p[i] != '\0')
	{
		write(1, &p[i], 1);
		i++;
	}
	return (0);
}
