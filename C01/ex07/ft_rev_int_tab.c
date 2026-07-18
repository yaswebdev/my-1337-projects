#include <unistd.h>


void ft_rev_int_tab(int *tab, int size){
	
	int f;
	int l;
	int temp;

	f = 0;
	l = size - 1;

	while(f < l){
		temp = tab[f];
		tab[f] = tab[l];
		tab[l] = temp;
		f++;
		l--;
	}
}




int main(){

	int nums[5] = {1,2,3,4,5};
	int i = 0;

	ft_rev_int_tab(nums, 5);

	while (i < 5){
	
		write(1, &nums[i], 1);
		i++;
	
	}
	return 0;
}
