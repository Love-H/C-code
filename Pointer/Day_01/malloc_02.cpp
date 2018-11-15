/*
	2018-11-14 15:40:55
	目的： 动态分配
*/

#include <stdio.h>
#include <malloc.h>

void f(int *q)
{
	*q = 200;
}

int main()
{
	int * p = (int *)malloc(sizeof(int));  //sizeof(int)返回值是int所占的字节数 
	*p = 10;
	
	printf("%d\n", *p);  // 10
	f(p);				 // p是int *类型 
	printf("%d\n", *p);  // 200
	
	return 0;
}
