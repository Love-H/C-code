/*
	2018-10-15 20:45:28
	Ŀ�ģ�쳲���������  1 1 2 3 5 8 13 21
*/ 

#include <stdio.h>

int main()
{
	int i,num;
	int f1, f2, f3;
	
	f1 = f2 = 1;
	
	printf("������������쳲��������еĵڼ�λ����\n");
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
	printf("����ǣ�%d", f3);
} 
