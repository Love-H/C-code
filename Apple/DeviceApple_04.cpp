/*
	2018-11-6 17:28:39
	目的：分苹果
			分配次数  T 1~200
			原有苹果  N >= 1
			小孩	  M >= 100000
			可增苹果  K >= 100000
*/

#include <stdio.h>

int main() {
	int T,N,M,K;

	while (T>=1 && T<=200) {
		printf("请输入所需次数: ");
		scanf("%d", &T);
	}

	while (T--) {
		printf("请依次输入原有苹果N、孩子M、老师苹果K（空格隔开）:\n");
		scanf("%d%d%d", &N, &M, &K);

		if (0 == N%M)
			printf("YES\n");
		else if (K > (M - (N%M) ) )
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}

