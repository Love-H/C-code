/*
	2018-11-6 17:28:39
	Ŀ�ģ���ƻ��
			�������  T 1~200
			ԭ��ƻ��  N >= 1
			С��	  M >= 100000
			����ƻ��  K >= 100000
*/

#include <stdio.h>

int main() {
	int T,N,M,K;

	while (T>=1 && T<=200) {
		printf("�������������: ");
		scanf("%d", &T);
	}

	while (T--) {
		printf("����������ԭ��ƻ��N������M����ʦƻ��K���ո������:\n");
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

