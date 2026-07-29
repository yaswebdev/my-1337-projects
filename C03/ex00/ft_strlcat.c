#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_dest = 0;
	unsigned int len_src = 0;
	unsigned int i = 0;


	while(dest[len_dest])
	{
		len_dest++;
	}

	while(src[len_src])
	{
		len_src++;
	}

	if(size <= len_dest)
		return (size + len_dest);

	while(src[i] && (len_dest + i) < (size - 1) )
	{
		dest[len_dest + i] = src[i];
		i++;
	}

	dest[len_dest + i] = '\0';

	return (len_src + len_dest);
}



int main(){
	char src[] = " World";
	char dest[] = "Hello";
	int i;

	i = ft_strlcat(dest, src, sizeof(dest));

	printf("%d", i);
}
