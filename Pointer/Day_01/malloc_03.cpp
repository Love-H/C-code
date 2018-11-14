/*
	2018-11-14 17:23:58
	目的：动态分配内存举例 
*/

#include <stdio.h>
#include <malloc.h>

int main()
{
	int a[5];
//	a[5] = {1,2,3,4,5};
	
//	int * pArray;
	int i,len;
	
	printf("请输入数组长度\n");
	scanf("%d", &len);
	
	int * pArray = (int *)malloc(4*len);
	
	for(i=0; i<len; ++i) {
		scanf("%d", &pArray[i]);
	}
	
	printf("数组内容是:");
	
	for(i=0; i<len; ++i) {
		printf(" %d", pArray[i]);
	}
	
	free(pArray);
	
		for(i=0; i<len; ++i) {
		printf(" %d", pArray[i]);
	}
	
	return 0;
}
