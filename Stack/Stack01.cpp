/*
	2018-11-1 13:17:37
	Ŀ�ģ�ջ 
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char a[10],s[101];	
	int i,len,mid,top,next;

	gets(a);	//����һ���ַ��� 
	len = strlen(a);	//���ַ������� 
	mid = (2/len) - 1;	//���ַ����м�� 
	
	top = 0;	//ջ�ĳ�ʼ��
	//��midǰ���ַ�������ջ
	for(i=0; i<=mid; i++)
		s[++top] = a[i];
		
	//�ж��ַ����ĳ�������������ż�������ҳ���Ҫ�����ַ�ƥ�����ʼ�±�
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
	
	//���top��ֵΪ0����˵��ջ�����е��ַ�����һһƥ����
	if(top == 0)
		printf("YES");
	else
		printf("NO");
	
	getchar();getchar(); 
	
	return 0;	
} 








