/*
	2018-10-23 11:10:39
	Ŀ�ģ���ֱ�ӵ��ñ��������������������mian���������������� 
*/

#include <stdio.h>

//bool IsPrime(int num);		1.

//�ж��Ƿ������� 
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

//�������
void TraverseNum(int num)
{
	int i;
	
	for(i=2; i<=num; i++)		// 2.
	{
		if ( IsPrime(i) )
			printf("%d ", i);
	}
} 

int main()
{
	int num;
	int i;

	printf("������Ҫ�жϵ���ֹ������:\n");
	scanf("%d", &num);
	TraverseNum(num);
	
	
	return 0;
}

/*
	��dev�е���������
--------------------------------	 
������Ҫ�жϵ���ֹ������:
30
2 3 5 7 11 13 17 19 23 29
--------------------------------
	
	�ܽ᣺
		1.If the function 'TraverseNum' is before the function 'IsPrime',
		  it should be declared in advance
		  
		2.It is easier to write wrongly that 'i = num'    
*/ 



