#include <stdio.h>


int ft_strspn(const char *s, const char *accept)
{
	int count = 0;
	int i = 0;

	while(s[i])
	{
		if(accept[i] == s[i])
		{
			count++;
		}

		i++;
	}
	return count;
}


int main()
{
	int total;
	total = ft_strspn("abcd", "acb");

	printf("%d", total);
}
