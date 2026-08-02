#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				write(1, &argv[1][i], 1);
				i++;
			}

			start = i;

			while (argv[1][i]
				&& argv[1][i] != ' '
				&& argv[1][i] != '\t')
				i++;

			end = i - 1;

			while (end >= start)
			{
				write(1, &argv[1][end], 1);
				end--;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
