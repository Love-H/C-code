/*
	2018-10-22 10:44:32
	目的：比较两种函数
*/

# include <stdio.h>

void max1(int i, int j) {
	if(i > j)
		printf("max1的结果:%d\n", i);
	else
		printf("max1的结果:%d\n", j);
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
		printf("请输入要比较大小的两个整数：\n");
		scanf("%d%d", &a, &b);

		max1(a,b);
		
//		max2(a,b);		虽有返回值，但不输出到屏幕 
		printf("max2的结果:%d\n", max2(a, b));

		printf("请问是否接着进行比较大小?(Y/N):");
		scanf(" %c", &ch);
	}	while('Y'==ch || 'y'==ch);

		return 0;
}
