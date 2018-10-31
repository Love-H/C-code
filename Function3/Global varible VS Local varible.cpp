/*
	2018-10-26 15:54:01
	目的：区分全局变量和局部变量 ; 
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
	在dev中的输出结果是
------------------------------ 
10row 报错 
------------------------------ 

	Summary：
		1. because  the function 'g' before the code 'int k = 1000'
*/
