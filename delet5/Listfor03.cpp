#include <stdio.h>

int amount = {1,5,15,25,50};
char *name = {"penny","nickel","dime","quarter","half-dollar"}

int search(int x,int a[],int len)
{
	int ret = -1 ;
	
	for (int i = 0; i < len; i++ )
	{
		if( x == a[i])
		{
			ret = i ;
			break;
		}
	}
	
	
	return ret;
}

int main()
{
	int j;
	printf("请输入要寻找的数:\n");
	scanf("%d",&j);
	int r = search( j, b,sizeof(b)/sizeof(b[0]));
	printf("%d\n",r);
			
	return 0;
}






