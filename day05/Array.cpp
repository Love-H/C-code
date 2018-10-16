/*
	2018-10-16 11:25:58
	目的：把一个数组元素给全部倒过来 
*/

#include <stdio.h>

int main()
{
	int a[7] = {1,2,3,4,5,6,7};
	int i,j,t;
	
	i = 0;
	j = 6;
	
	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		
		i++;
		j--;
	}
	
	for (i=0; i<7; ++i)
		printf("%d ", a[i]);
		
	return 0;
} 
