#include <stdio.h>
#define Num 10

int main() {
	int array[Num], sum = 0, a = Num;
	
	
	for(int i = 0;i < Num;i++) {
		printf("请输入第%i位学生的成绩:\n",i + 1);
		scanf("%d",&array[i]);
		sum += array[i];
	}
	
	printf("该组学生平均成绩为:%d\n",sum/Num);
}

