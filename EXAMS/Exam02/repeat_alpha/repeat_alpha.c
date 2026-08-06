#include <unistd.h>


int main(int argc, char **argv)
{
	int i;
	int j;
	int index;
	if(argc == 2)
	{
		i = 0;
		while(argv[1][i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				index = (argv[1][i] - 'a') + 1;
				j = 0;
				while (j < index)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				index = (argv[1][i] - 'A') + 1;
				j = 0;
                                while (j < index)
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
}
