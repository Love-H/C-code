/*
	2018-10-23 09:15:09
	目的：如何合理设计函数 
*/ 

# include <stdio.h>

int main(void)
{
	int num;
	int i;
	
	printf("请输入要判断的整数：\n");
	scanf("%d", &num);
	for(i=2; i<num; i++)
	{
		if(0 == num%i)
			break;
	}
	if (i == num)
		printf("Yes！\n");
	else
		printf("No!\n");
	
	return 0;
}

/*
	在dev中的输出结果是
	请输入要判断的整数：
-------------------------------- 
31
Yes！

-------------------------------- 

	总结：
		只用一个函数实现，不好，代码的可重复利用率不高,且不容易理解 
*/









