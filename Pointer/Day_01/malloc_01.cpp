/*
	2018-11-14 13:56:17
	Ŀ�ģ�malloc �� memory(�ڴ�) allocate(����)����д 
*/

#include <stdio.h>
#include <malloc.h>

int main()
{
	int i  = 5;
	int * p = (int *)malloc(4);

	*p = 5;
	free(p);
	printf("ͬ־�Ǻã�\n");
	
	return 0;
}
