#include <stdio.h>

int count_words(char *str)
{
	int i = 0;
	int start = 1;
	int count = 0;

	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t')
		{
			start = 1;
		}
		else if(start)
		{
			count++;
			start = 0;
		}
		i++;
	}

	return (count);
}

int main(){
	char str[] = " Hello world 9 ";
	printf("%d", count_words(str));
}
