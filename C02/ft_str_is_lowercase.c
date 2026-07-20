#include <unistd.h>

int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str){
	
	int i = 0;
	while(str[i] != '\0'){
		if(!(str[i] >= 'a' && str[i] <= 'z')){
			return 0;
		}
		i++;
	}
	return 1;
}



int main(){

	char str[] = "he8llowworld";

	if(ft_str_is_lowercase(str)){
		write(1, "Yes\n", 4);
	}
	else{
		write(1, "No\n", 3);
	}
	return 0;
}
