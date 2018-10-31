/*
	2018-10-23 09:47:00
	目的： 
*/

# include <stdio.h>

bool IsPrime(int num)
{
	int i;
	for (i=2; i<num; i++)
	{
		if (0 == num%i)
			break;
	}
	if (i == num)
		return true;
	else
		return false;
}

int main(void)
{
	int num;
	
	printf("请输入要判断的整数：\n");
	scanf("%d", &num);
	if (IsPrime(num))
		printf("Yes！\n");
	else
		printf("No!\n");
					
	return 0;	
} 




