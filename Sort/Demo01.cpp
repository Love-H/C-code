/*
	2018-10-22 10:44:32
	Ŀ�ģ��Ƚ����ֺ���
*/

# include <stdio.h>

void max1(int i, int j) {
	if(i > j)
		printf("max1�Ľ��:%d\n", i);
	else
		printf("max1�Ľ��:%d\n", j);
}

int max2(int i, int j) {
	if(i > j)
		return i;
	else
		return j;
}

int main() {
	int a,b;
	char ch;

	do {
		printf("������Ҫ�Ƚϴ�С������������\n");
		scanf("%d%d", &a, &b);

		max1(a,b);
		
//		max2(a,b);		���з���ֵ�������������Ļ 
		printf("max2�Ľ��:%d\n", max2(a, b));

		printf("�����Ƿ���Ž��бȽϴ�С?(Y/N):");
		scanf(" %c", &ch);
	}	while('Y'==ch || 'y'==ch);

		return 0;
}
