/*
	2018-11-13 21:37:14
	Ŀ�ģ�һ�������н����󣬸ú����е������޷�����������ʹ�� 
*/

#include <stdio.h>

void g (int a[], int len)
{
	a[2] = 88;
}

void f ()
{
	int a[5] = {1,2,3,4,5};
	
	g(a,5);
	printf("%d\n", a[2]);
}

int main()
{
	f();	
	return 0;
}
