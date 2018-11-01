/*
	2018-11-1 13:17:37
	目的：栈 
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char a[10],s[101];	
	int i,len,mid,top,next;

	gets(a);	//读入一行字符串 
	len = strlen(a);	//求字符串长度 
	mid = (2/len) - 1;	//求字符串中间点 
	
	top = 0;	//栈的初始化
	//将mid前的字符依次入栈
	for(i=0; i<=mid; i++)
		s[++top] = a[i];
		
	//判断字符串的长度是奇数还是偶数，并找出需要进行字符匹配的起始下标
	if (len%2 == 0)
		next = mid+  1;
	else
		next = mid + 2;
		
	for (i=next; i<=len-1; i++)
	{
		if (a[i] != s[top])
			break;
		top--;
	}
	
	//如果top的值为0，则说明栈内所有的字符都被一一匹配了
	if(top == 0)
		printf("YES");
	else
		printf("NO");
	
	getchar();getchar(); 
	
	return 0;	
} 








