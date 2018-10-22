#include<stdio.h>
int main()
{
	union da
	{
		int a;
		char c[2];
	};
	union da A;
	A->c[0]=10,A->c[1]=1;
	//A->c[0]=10;
	//A->c[1]=1;
	printf("%d",A->a);
 } 
