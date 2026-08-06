#include <stdio.h>

int count_words(char *str)
{
	int i;
	int count;
	int start;

	i = 0;
	count = 0;
	start = 0;

	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t')
		{
			start = 0;
		}
		else if(start == 0)
		{
			count++;
			start = 1;
		}
		i++;
	}

	return count;
}


int main()
{
	char str[] = "	jjjj Hello World";
	int total_words = count_words(str);

	printf("%d\n", total_words);
}
