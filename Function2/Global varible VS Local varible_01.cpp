/*
	2018-10-26 16:17:43
	Ä¿µÄ£º 
*/ 
#include <stdio.h>

int i = 19;

void f(int i)
{
//	int i = 10;	           1. 
	printf("%d\n", i);
}

int main()
{
	f(5);
	
	return 0;
}

/*
	The output in dev is 
--------------------------------	 
5

--------------------------------	 
	Summary£º
			1.  because the function 'f(int i )' had wrote the 'i' ,
			    so the 'i' cant be written inside the function again
			
			2	need to think about why the result is 5	
*/


