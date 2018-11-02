/*
	2018-11-2 19:19:06
	Purpose: write a function "power( )" 
*/

#include <stdio.h>

int power(int base,int n)
{
	int sum,i;	
	
	for (i=1; i<=n; ++i)
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
please enter the base： 2
please enter the n： 5
0
-------------------------------- 
	Sumarry:
			1. Why is the program wrong ?
				Becaues the variable 'sum' in the function 'power',which had no assignment 
			
			Correct Answer
			 	line 11 :	sum = 1; 
*/ 
 
