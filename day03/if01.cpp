/*
	2018-10-14 21:31:03
	目的： 弄明白该为何程序会出错 
*/

#include <stdio.h>

int main()
{
	int a = -1;
	
	if(a > 0)
		printf("解决就解决");
		printf("哈哈哈哈哈哈！\n");
		
		else if (a == 0)
		printf("啊啊啊啊啊\n");
	else
		printf("滚滚滚滚滚滚\n");	
		
}

/*
	在dev中的输出结果是
-------------------------------------------------- 
Line：16  [Error] 'else' without a previous 'if'
-------------------------------------------------- 
	 
*/
