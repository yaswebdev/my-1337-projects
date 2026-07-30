#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int right;
	int len;
	int palindrome;

	if(argc == 2)
	{
		len = 0;
		while(argv[1][len])
		{
			len++;
		}

		i = 0;
		right = len - 1;
		palindrome = 1;

		while(i < right){
			if(argv[1][i] != argv[1][right])
			{
				palindrome = 0;
				break;
			}
			i++;
			right--;
		}


		if(palindrome)
		{
			i = 0;

			while(argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
		
	}
	write(1, "\n", 1);
}
