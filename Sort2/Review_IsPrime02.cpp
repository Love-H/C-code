/*
	2018-10-23 09:58:09
	Ŀ�ģ��жϴ�һ���û�ָ���������ж��ٸ����� 
*/

#include <stdio.h>

bool IsPrime(int num)
{
	int i;
	
	for (i=2; i<num; i++)
	{
		if(0 == num%i)
			break;
	}
	if (i == num)
		return true;
	else
		return false;
}

int main()
{
	int num;
	int i;

	printf("������Ҫ�жϵ���ֹ������:\n");
	scanf("%d", &num);

	for(i=2; i<num; i++)
	{
		if(IsPrime(i))
			printf("%d ", i);
	}
	
	return 0;
}

/*
	��dev�е���������
--------------------------------	 
������Ҫ�жϵ���ֹ������:
40
2 3 5 7 11 13 17 19 23 29 31 37

--------------------------------
	
	�ܽ᣺
		1.Compared to the previous function,the new function is reusable, 
		and the code is easier to understand
*/ 



