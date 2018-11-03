/*
	2018-11-3 16:24:22
	目的：验证表达式 getchar() != EOF 的值到底是 0 还是 1 
*/

#include <stdio.h>

int main()
{
	int c;
	
	c = getchar();
	while (c != EOF){
		putchar (c);
		c = getchar();
	}
	
	return 0;	
}

