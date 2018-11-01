#include <stdio.h>

int main()
{
	int a[15],i,j,num;
	
	//初始化数组为0 
	for (i=0; i<=15; i++)
		a[i]=0;
		
	//循环读入五个数字
	for (i=1; i<=5; i++)
	{
		printf("请输入第%d位英雄杀敌数:\n", i);
		scanf("%d", &num);					//把每个数字读到变量num中
		a[num]++;							//进行记数
	} 
	
	for (i=15; i>=0; i--)				    //依次判断a[0]~a[15]
		for (j=1; j<=a[i]; j++)				//出现几次就打印几次
			printf("%d ", i);
			
	return 0;
}
