/*
	2018-10-14 16:29:20
	目的：防止再次键盘输入发生错误 
*/

#include <stdio.h>

int main()
{
	int i;
	char ch;
	
	printf("请输入第一个数字"); 
	scanf("%d", &i);
	printf("i = %d\n", i);
	
	while ( (ch = getchar()) != '\n')	//处理 
		continue;
	
	printf("请输入第二个数字");
	int j;
	scanf("%d", &j);
	printf("j = %d\n", j);
	
	return 0; 
}

/*
	在Dev中的输出结果
---------------------------
请输入第一个数字12asd
i = 12
请输入第二个数字456
j = 456
---------------------------

	总结：应当适当的编写代码对用户的非法输入做适当的处理 
	 
*/ 
