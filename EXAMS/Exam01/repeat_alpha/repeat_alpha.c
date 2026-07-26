#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;
		int lower_index;
		int higher_index;
		int j;

		i = 0;
		while(argv[1][i] != '\0')
		{

			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				lower_index = argv[1][i] - 'a' + 1;
				
				j = 0;
				while(j < lower_index)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}

			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				higher_index = argv[1][i] - 'A' + 1;
				
				j = 0;
				while(j < higher_index)
				{
					write(1, &argv[1][i], 1);
					j++;
				}

			}

			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
