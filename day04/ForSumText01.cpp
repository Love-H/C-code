/*
	2018-10-15 12:48:57
	目的：练习循环 
*/ 

#include <stdio.h>

int main()
{
	int i;
	float sum;
	
	for(i = 1; i <= 100; i++ )
	{
//		sum += 1/(float)(i);
		sum += 1.0 / i;			//更简单 
	} 
	printf("sum = %f\n", sum);
	
	return 0;	
}

/*
	在dev中的输出结果是 
-------------------------
sum = 5.187378
-------------------------

	总结：浮点型除以整型的结果是浮点型
		【哪个范围大，算哪个的数据类型 】 
	 
*/
