/*
	2018-10-22 15:10:01
	目的：一定要明白该程序为什么错误 
	
*/

#include <stdio.h>

void g(void)
{
	f();
}

void f(void)
{
	printf("哈哈哈哈哈\n");
}

int mian()
{
	g();
	
	return 0;
}

/*
	在dev中的输出结果是
-------------------------------------------------
11 [Error] 'f' was not declared in this scope 

------------------------------------------------- 
 
	总结：
		1.  because the Function 'g()' have use the 'f()',
			but the Function 'f()' is not declared 
		 
*/
