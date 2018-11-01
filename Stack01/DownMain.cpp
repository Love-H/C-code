/*
	2018-10-22 14:51:03
	目的：想把函数写在主函数下面 
*/ 

# include <stdio.h>

void f(void);		// 	1
	
//void f(void)			2 

//void f(int a);		3


int main(void)
{
	f();
	
	return 0;
}

void f(void)
{
	printf("哈哈哈哈\n");
}

/*
	在dev中的输出结果是
-----------------------------	 
哈哈哈哈

-----------------------------	 

	总结：
		1. 若没先在main前写函数声明，将会报错
		   eg：[Error] 'f' was not declared in this scope
		2. ';' can not be lost  
		3. 'int a' can not be writtern,
			because the function should be the same as written below
*/ 
