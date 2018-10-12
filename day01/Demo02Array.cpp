#include <stdio.h>

int main() {
	int Array1[10] = {0};
	int Array2[] = {1,45,32,65,89};
	int Array3[10] = {[2] = 12,[4] = 45,[6] = 32};

	for (int i = 0; i < 10; i++) {
		printf("%d ",Array2[i]);

	}
	
	
}
