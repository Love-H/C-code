/*
	2018-10-26 15:54:01
	Ŀ�ģ�����ȫ�ֱ����;ֲ����� ; 
*/

#include <stdio.h>

void g()
{
	f();
}

int k = 1000;

void f()
{
	printf("k = %d\n", k);
}

int main()
{
	f();
	g();
	
	return 0;
}

/*
	��dev�е���������
------------------------------ 
10row ���� 
------------------------------ 

	Summary��
		1. because  the function 'g' before the code 'int k = 1000'
*/
