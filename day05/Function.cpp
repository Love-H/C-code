
#include<stdio.h>

int main()
{
	int a,b,c,d,e,f,i;
	
	a = 1, b = 2, c = 3, d = 9, e = -5, f = 100;
	i = (a = 1, b = 2, c = 3, d = 9, e = -5, f = 100);
	
	printf("a = %d, b = %d, c = %d, d = %d, e = %d, f = %d\n", a, b, c, d, e, f);
	printf("i = %d", i);
}
