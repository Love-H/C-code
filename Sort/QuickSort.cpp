
#include <stdio.h>

viod Qsort(left,right)
{
	int i,j,num,temp;
	int a[5] = {12,45,3,78,52};
	
	i = 0,j = 4;
	temp = a[left];
	
	while (j>i)
	{
		if(a[j] > a[j-1])	
			j--;
		
		if(a[i] < a[i+1])
			i++;
					
		num = a[j];
		a[j] = a[i];
		a[i] = num;	
	}
	
	a[temp] = a[i];
	
	 
	Qsort(lef+1,right);	
			
} 
/*
	Summary:
			- 没先判断如果 left > right 时该怎么办？ 
			
			- 哨兵 i、j 移动的条件应该还有个 while (i != j)  
			
			- 不是比较 a[j] 和 a[j-1] 的大小，而是比较 a[j] 和 temp(即基准数) 的大小 
			  15rows 而且不能用 if ，要用 while  
*/
