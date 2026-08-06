#include <unistd.h>

int strrev(char *str)
{
	int len = 0;

	while(str[len])
	{
		len++;
	}

	return len;
}

int main(int argc, char **argv)
{
	int i;
	int count;
	int j;
	int start = 1;
	int end;

	if(argc == 2)
	{


			i = 0;
			while(argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				start = 0;
				write(1, &argv[1][i], 1);
				i++;
			}

			count = 0;
			while(argv[1][i] && (argv[1][i] != ' ' || argv[1][i] != '\t'))
			{
				start = 1;
				count++;
				i++;
			}

			j = 0;
			end = count - 1;

			while(j <= end && start)
			{
				write(1, &argv[1][end], 1);
				j++;
				end--;
			}
	}
	write(1, "\n", 1);
}
