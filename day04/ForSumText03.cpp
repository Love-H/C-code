/*
	2018-10-15 14:16:14
	Ŀ�ģ��� 1 �� 100 ֮�������֮�� 
		 �� 1 �� 100 ֮��������ĸ��� 
		 �� 1 �� 100 ֮���������ƽ��ֵ
		 �� 1 �� 100 ֮���ż��֮�� 
*/ 
#include<stdio.h>

int main()
{
	int i,sum = 0;
	
	//�� 1 �� 100 ֮�������֮��
	for(i = 1; i <= 100; i++)
	{
		if(i%2 == 1)
		{
			sum += i;
		}
	}
	printf("1 �� 100 ֮�������֮��Ϊ:%d\n", sum);	
	
	//�� 1 �� 100 ֮��������ĸ��� 
	int k,count = 0;
	
	for(k = 0; k <= 100; k++)
	{
		if (k%2 == 1)
		{
			count ++;
		}
	}
	printf("1 �� 100 ֮��������ĸ���:%d\n", count);
	
	//�� 1 �� 100 ֮���������ƽ��ֵ
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
	printf("1 �� 100 ֮���������ƽ��ֵ��%f\n", avg);	
	
	return 0;
}

	