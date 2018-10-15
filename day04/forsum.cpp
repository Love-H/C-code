/*
	2018-10-15 09:15:52
	目的：从1累加到100 
*/ 

#include <stdio.h>

int main() 
{
	int i,sum = 0;
	
	for(i = 0;i < 100;i++)
	{
		sum += i;	
	} 
	
	printf("总和：%d\n", sum);
	
	return 0;
}
