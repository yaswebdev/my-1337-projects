#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if(to_find[0] == '\0')
		return (str);

	i = 0;
	while(str[i]){
		j = 0;
		while(to_find[j] && str[i + j] == to_find[j]){
			j++;
		}

		if(to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return NULL;

}


int main(){
	char str[] = "Hello World";
	char subs[] = "oWorld";
	char *p;
	int i;

	p = ft_strstr(str, subs);
	i = 0;

	if (p == NULL)
	{
		write(1, "Not found\n", 10);
		return (0);
	}

	while(p[i])
	{
		write(1, &p[i], 1);
		i++;
	}

}
