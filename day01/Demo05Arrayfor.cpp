#include <stdio.h>

int main() {
	int a[3][4] = {
				{1,2,3,4},
				{5,6,7,8},
				{9,10,11,12}
			};
	int i,j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 4; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		printf("\n");

	//行列互换
	for(i = 0;i < 4;i++) {
		for(j = 0;j < 3;j++) {
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
		printf("\n");

	//指定具体位置的数值	
	int b[3][4] = {{1},{5},{8}};
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 4; j++) {
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
