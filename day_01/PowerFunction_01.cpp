/*
	2018-11-2 19:34:06
	Purpose: write a function "power( )" 
*/

#include <stdio.h>

int power(int base,int n)
{
	int sum = 1;
	
	for ( ; n>0; --n)
		sum *= base;
		
	return sum;
}

int main()
{
	int base,n;								// base 为底数 , n 为多少次幂
	
	printf("please enter the base： ");	
	scanf("%d", &base);
	printf("please enter the n： ");		
	scanf("%d", &n);
	
	 
	printf("%d", power(base,n));
	
	return 0;
}

/*
	Output in Dev-C++
-------------------------------- 
please enter the base： 3
please enter the n： 3
27
-------------------------------- 
	Sumarry:
			1. 
*/ 
 
