/*
	2018-10-23 11:10:39
	目的：想直接调用遍历输出函数，而不用在mian函数里另外遍历输出 
*/

#include <stdio.h>

//bool IsPrime(int num);		1.

//判断是否是素数 
bool IsPrime(int num)
{
	int i;
	
	for (i=2; i<num; i++)
	{
		if(0 == num%i)
			break;
	}
	if (i == num)
		return true;
	else
		return false;
}

//遍历输出
void TraverseNum(int num)
{
	int i;
	
	for(i=2; i<=num; i++)		// 2.
	{
		if ( IsPrime(i) )
			printf("%d ", i);
	}
} 

int main()
{
	int num;
	int i;

	printf("请输入要判断到截止的数字:\n");
	scanf("%d", &num);
	TraverseNum(num);
	
	
	return 0;
}

/*
	在dev中的输出结果是
--------------------------------	 
请输入要判断到截止的数字:
30
2 3 5 7 11 13 17 19 23 29
--------------------------------
	
	总结：
		1.If the function 'TraverseNum' is before the function 'IsPrime',
		  it should be declared in advance
		  
		2.It is easier to write wrongly that 'i = num'    
*/ 



