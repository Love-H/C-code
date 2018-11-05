/*
	2018-11-5 14:01:23
	目的：改进使得 不用 goto 跳转
*/

#include <stdio.h>

int main() {
	int i,T,N,M,K;
	int res = 1;

	printf("请输入所需次数: ");
	scanf("%d", &T);

	while (T > 200) {											//  1.
		printf("输入有误，请输入所需次数: ");
		scanf("%d", &T);
	}

	while(T--) {												// 2.

		//读取数据
		printf("请依次输入原有苹果N、孩子M、老师苹果K（空格隔开）:\n");
		scanf("%d%d%d", &N, &M, &K);

		//判断是否够分
		if ( M < (N+K) ) 
			printf("YES\n");	
		else 
			printf("NO\n");
	}
	
	return 0;
} 
	/*
		Output in Dev-C++
	--------------------------------
	请输入所需次数: 321
	输入有误，请输入所需次数: 2
	请依次输入原有苹果N、孩子M、老师苹果K（空格隔开）:
	10 8 3
	YES
	请依次输入原有苹果N、孩子M、老师苹果K（空格隔开）:
	10 16 2
	NO
	
	--------------------------------
		Sumarry：
				1. 一开始想着用函数代替，后来发现可以用 while 先判断 T 即可
				2. 循环可用 while 代替，使得程序更为简单
	*/

