/*
	2018-10-22 15:10:01
	Ŀ�ģ�һ��Ҫ���׸ó���Ϊʲô���� 
	
*/

#include <stdio.h>

void g(void)
{
	f();
}

void f(void)
{
	printf("����������\n");
}

int mian()
{
	g();
	
	return 0;
}

/*
	��dev�е���������
-------------------------------------------------
11 [Error] 'f' was not declared in this scope 

------------------------------------------------- 
 
	�ܽ᣺
		1.  because the Function 'g()' have use the 'f()',
			but the Function 'f()' is not declared 
		 
*/
