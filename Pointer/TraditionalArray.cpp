/*
	2018-11-13 21:21:24
	目的：传统数组的缺陷 
*/

#include <stdio.h>

int main()
{
	int a[5] = {1,2,3,4,5};
	
	int len = 5;
	int a[len];     //错误 
	
	return 0;	
} 
