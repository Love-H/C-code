#include <stdio.h>
int main() {
	int n,i;
	printf("�������ַ��ĸ���:");
	scanf("%d",&n);
	
	char a[n+1];
	printf("�뿪ʼ�����ַ�:");
	getchar();
	for(i = 0; i < n; i++) {
		scanf("%c", &a[i]);
	} 
	
	a[n] = '\0';
	printf("��������ַ�����:%s\n", a);
	
	return 0;
}




