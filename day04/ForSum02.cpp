/*
	2018-10-15 10:27:21
	目的：1 + 1/2 + ... + 1/100
*/

#include <stdio.h>

int main()
{
	int i;	
//	int sum = 0;				   错误 1.1							
	float sum = 0;
	
	for (i = 1; i <= 100; i++)
	{
		sum += + 1 / (float)(i);
//		sum += 1.0/i; 		  	   更简单的写法 

//		sum += 1/i;				   错误 2.1
//		sum += (float)(1/i);	   错误 2.2
	}
	
//	printf("sum = %d\n", sum);     错误 1.2
	printf("sum = %f\n", sum);		//float必须用 %f输出 
	
	return 0;
}

/*
	在dev中的输出结果是 
	
错误 1.1 
------------------------
sum = 0
------------------------


错误 1.2 
------------------------
sum = -2147483648
------------------------


错误 2.1
------------------------
sum = 1.000000
------------------------

错误 2.2
------------------------
sum = 1.000000
------------------------


正确结果
------------------------ 
sum = 5.187378
------------------------ 


	总结 
		一：数据类型 
			没考虑到sum的结果是带小数 ，定义了错误的数据类型，需用float
			float类型的数据必须用 %f 输出	
		
		二：强制转换
			整型除以整型得到的结果还是整型，而sum是浮点型，所以需要强制转换
			
			格式：
				(数据类型)(表达式)
			功能：
				把把表达式的值强制转化为前面所执行的数据类型
			Demo：
				(int)(4.5+2.2)	最终值是 6
				(float)(5)		最终值是 5.000000 
*/
