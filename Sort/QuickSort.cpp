
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
			- û���ж���� left > right ʱ����ô�죿 
			
			- �ڱ� i��j �ƶ�������Ӧ�û��и� while (i != j)  
			
			- ���ǱȽ� a[j] �� a[j-1] �Ĵ�С�����ǱȽ� a[j] �� temp(����׼��) �Ĵ�С 
			  15rows ���Ҳ����� if ��Ҫ�� while  
*/
