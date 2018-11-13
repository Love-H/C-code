/*
	2018-11-13 21:37:14
	目的：一函数运行结束后，该函数中的数组无法被其他函数使用 
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
