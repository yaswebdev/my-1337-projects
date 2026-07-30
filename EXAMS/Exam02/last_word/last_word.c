#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int len;

		len = 0;
		while(argv[1][len])
		{
			len++;
		}

		while(len > 0 && (argv[1][len - 1] == ' ' || argv[1][len - 1] == '\t'))
		{
			len--;
		}

		while(len > 0 && argv[1][len - 1] != ' ' && argv[1][len - 1] != '\t')
		{
			len--;
		}

		while(argv[1][len] && argv[1][len] != ' ' && argv[1][len] != '\t')
		{
			write(1, &argv[1][len], 1);
			len++;
		}

	}

	write(1, "\n", 1);
}
