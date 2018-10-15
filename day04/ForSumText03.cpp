/*
	2018-10-15 14:16:14
	目的：求 1 到 100 之间的奇数之和 
		 求 1 到 100 之间的奇数的个数 
		 求 1 到 100 之间的奇数的平均值
		 求 1 到 100 之间的偶数之和 
*/ 
#include<stdio.h>

int main()
{
	int i,sum = 0;
	
	//求 1 到 100 之间的奇数之和
	for(i = 1; i <= 100; i++)
	{
		if(i%2 == 1)
		{
			sum += i;
		}
	}
	printf("1 到 100 之间的奇数之和为:%d\n", sum);	
	
	//求 1 到 100 之间的奇数的个数 
	int k,count = 0;
	
	for(k = 0; k <= 100; k++)
	{
		if (k%2 == 1)
		{
			count ++;
		}
	}
	printf("1 到 100 之间的奇数的个数:%d\n", count);
	
	//求 1 到 100 之间的奇数的平均值
	int j,sum1 = 0,count1 = 0;
	float avg; 
	for(i = 1; i <= 100; i++)
	{
		if(i%2 != 0)
		{
			sum1 += i;
			count1 ++; 
		}

	}
	avg = sum1 / count1;
	printf("1 到 100 之间的奇数的平均值：%f\n", avg);	
	
	return 0;
}

	
