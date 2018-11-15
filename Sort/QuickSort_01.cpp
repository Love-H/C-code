#include <stdio.h>
int a[101],n;	//需要在函数中使用到，所以定义为全局变量 

void Qsort(int left, int right)
{
	if (left > right)
		return ;
	
	int i,j,temp,t;
	
	i = left;
	j = right;
	temp = 	a[left];
	
	while (i != j)
	{
		//先从右往左 
		while (a[j]>=temp && i<j)
			j--;
		//再从左往右	
		while (a[i]<=temp && i<j)
			i++;
		
		//交换两个数在数组中的位置
		if (i<j)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}	
	}
	
	a[left] = a[i];
	a[i] = temp;
	
	Qsort(left, i-1);
	Qsort(i+1, right); 
	return ;
}

int main()
{
	int i,j;
	
	scanf("%d", &n);
	for (i=1; i<=n; i++)
		scanf("%d", &a[i]);
		
	Qsort(1,n);
	
	for (i=1; i<=n; i++)
		printf("%d ", a[i]);
		
	
	return 0;
}
