#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}


int main(){
	int tab[] = {11, 15, 1, 23, 5, 99, 0};
	int i = 0;
	int size = 7;

	ft_sort_int_tab(tab, size);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

}
