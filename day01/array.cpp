#include <stdio.h>
#define Num 10

int main() {
	int array[Num], sum = 0, a = Num;
	
	
	for(int i = 0;i < Num;i++) {
		printf("�������%iλѧ���ĳɼ�:\n",i + 1);
		scanf("%d",&array[i]);
		sum += array[i];
	}
	
	printf("����ѧ��ƽ���ɼ�Ϊ:%d\n",sum/Num);
}

