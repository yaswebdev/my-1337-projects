#include <unistd.h>

int ft_str_is_printable(char *str);


int ft_str_is_printable(char *str){
	
	int i = 0;

	while (str[i] != '\0')
	{
		if(!(str[i] >= 32 && str[i] <= 126))
		{
			return 0;
		}
		i++;
	}
	return 1;
}



int main(){

	char str[] = "Hello World";

	if(ft_str_is_printable(str)){
		write(1, "Yes\n", 4);
	}
	else{
		write(1, "No\n", 3);
	}

	return 0;
}
