/*
	2018-11-14 13:56:17
	目的：malloc 是 memory(内存) allocate(分配)的缩写 
*/

#include <stdio.h>
#include <malloc.h>

int main()
{
	int i  = 5;
	int * p = (int *)malloc(4);

	*p = 5;
	free(p);
	printf("同志们好！\n");
	
	return 0;
}
