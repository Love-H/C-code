/*
	2018-10-15 20:45:28
	目的：斐波那契数列  1 1 2 3 5 8 13 21
*/ 

#include <stdio.h>

int main()
{
	int i,num;
	int f1, f2, f3;
	
	f1 = f2 = 1;
	
	printf("请输入您想求斐波那契数列的第几位数：\n");
	scanf("%d", &num);
	
	if (num == 1 || num == 2)
	{
		f3 = 1;		
	} 
	else
	{
		for (i=3; i<=num; i++)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		} 
	}
	printf("结果是：%d", f3);
} 
