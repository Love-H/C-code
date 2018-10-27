/*
	2018-10-22 12:56:35
	目的：判断该数是否为素数 
*/ 

# include <stdio.h>

bool IsPrime(int a)
{
	int i;
	
	for(i=2; i<a; i++)	// It is easy to write wrong  ( i = 0 )
	{
		if (a%i == 0)
			break;	
	}
		if (i == a)
		return true;
		else
		return false;
}

int main()
{
	int num;
	
	printf("请输入要判断的整数:\n");
	scanf("%d", &num);
	
	if ( IsPrime(num) )
		printf("Yes\n");
	else
		printf("No\n");
		
	return 0; 
			
}

/*
	在dev中的输出结果是
---------------------------------- 
请输入要判断的整数:
23
Yes

----------------------------------

	总结：
		1.容易忽略素数判断时，循环应该从2开始，否则会在 i = 1 时便退出循环！ 
		2.函数功能尽量单一，有利于重复使用 
			如  return true 尽量省去，让用户调用时，自己选择如何处理结果 
*/


