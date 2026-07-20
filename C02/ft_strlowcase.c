#include <unistd.h>

char *ft_strupcase(char *str);

char *ft_strupcase(char *str)
{
        int i = 0;

        while(!(str[i] == '\0')){
                if(str[i] >= 'A' && str[i] <= 'Z'){
                        str[i] = str[i] + 32;
                }
                i++;
        }

}


int main(){
        char str[] = "HELLO WORLD";
        int i = 0;

        ft_strupcase(str);

        while(!(str[i] == '\0')){
                write(1, &str[i], 1);
                i++;
        }


        return 0;
}
