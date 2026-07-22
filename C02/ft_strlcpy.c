#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len = 0;
	unsigned int i = 0;

	while(src[len])
	{
		len++;
	}

	if(size > 0){
		while(src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}

		dest[i] = '\0';
	}

	return (len);
}

int main(){
        char src[] = "Hello";
        char dest[4];
        char s;
        unsigned int len = 0;
        int i = 0;



        len = ft_strlcpy(dest, src, sizeof(dest));
        while(dest[i] != '\0')
        {
                write(1, &dest[i], 1);
                i++;
        }

        s = len + '0';

        write(1, "\n", 1);
        write(1, &s, 1);

}
