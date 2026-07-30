#include <unistd.h>

int main(int argc, char **argv)
{
	int len;
	int size;

	if(argc == 2)
	{
		len = 0;
		while(argv[1][len])
		{
			len++;
		}
		
		size = len - 1;
		while(size >= 0){
			write(1, &argv[1][size], 1);
			size--;
		}
	}

	write(1, "\n", 1);
}
