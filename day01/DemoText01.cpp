//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include <stdio.h>

int main() {
	int i,k,j;
	
	for(int i = 1; i < 5; i++) {
		for(int k = 1; k < 5; k++) {
			for(int j = 1; j < 5; j++) {
				if(i != k && i != j && k != j) {
					printf("%d,%d,%d\n",i,k,j);
				}
			}
		}
	}
	
	return 0;
}
