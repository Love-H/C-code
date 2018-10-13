#include <stdio.h>

int search(int x, int a[], int len)
{
	int ret = -1;
	for(int i = 0; i < len; i++)
	{
		if(x == a[i])
		{
			ret = i;
			break;
		}
	}
	return ret;
} 

int main()
{	
	int x;
	int b[] = {5,12,65,78,13,8,53,48}; 
	printf("请输入要找的数:\n");
	scanf("%d",&x);	 
	int r = search(x, b, sizeof(b)/sizeof(b[0]));
	printf("%d\n", r);
	
	return 0;
}







