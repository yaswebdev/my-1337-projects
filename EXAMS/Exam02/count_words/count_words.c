#include <stdio.h>


int count_words(char *str){

	int i = 0;
	int count = 0;
	int start = 1;
	while(str[i]){
		if(str[i] == '\t' || str[i] == ' ')
		{

			start = 1;
		}

		else if (start)
		{
			count++;
			start = 0;
		}
		i++;
	}

	return count;
}

int main(){
	char str[] = "	Hello W0orld 9";
	int res = count_words(str);

	printf("%d", res);
}
