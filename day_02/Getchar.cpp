/*
	2018-11-3 16:24:22
	Ŀ�ģ���֤���ʽ getchar() != EOF ��ֵ������ 0 ���� 1 
*/

#include <stdio.h>

int main()
{
	int c;
	
	c = getchar();
	while (c != EOF){
		putchar (c);
		c = getchar();
	}
	
	return 0;	
}

