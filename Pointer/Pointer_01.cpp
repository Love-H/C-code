#include <stdio.h>

int main()
{
	int i = 5;
	int j = 10;
	
	int * p = &i;
	int * q = &j;
	printf("%d %d\n", p, q);
	printf("%d %d\n", &p, &q);
	
	int a[5];
	p = &a[1];
	q = &a[4];
	
	printf("p��q��ָ��ĵ�Ԫ���%d����Ԫ\n", q-p);
	
}
