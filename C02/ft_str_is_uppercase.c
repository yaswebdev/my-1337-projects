#include <unistd.h>


int ft_str_is_uppercase(char *str);




int ft_str_is_uppercase(char *str){
	int i = 0;

	while(str[i] != '\0'){
		if(!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return 0;
		}
		i++;
	}
	return 1;
}



int main(){

	char str[] = "HELLO";

	if (ft_str_is_uppercase(str)){
		write(1, "Yes\n", 4);
	}
	else {
		write(1, "No\n", 3);
	}


	return 0;
}
