/*
	2018-10-15 17:07:05
	目的：测试符号表达式 
*/

#include<stdio.h>
int main()
{
	int i,j;
	int k = 2;
	
	i = (2, 4, 5, 6);
	printf("i = %d\n", i);
	
	j = (k++, ++k, k+2, k-3);
	printf("j = %d\n", j);
	
	return 0;
}

/*
	在dev中的输出结果是
----------------------------- 
i = 6
j = 1
----------------------------- 

	总结：
			逗号表达式
		  		格式
					(A, B, C, D)			  	 
				功能
					从左到右执行
					最终表达式的值是最后一项的值 
*/

