/*
	2018年10月14日08:47:33
	功能：
	目的：
		测试 %x %X %#x %#X
*/
#include <stdio.h>

int main() {
	int x = 33;

	printf("%x\n",x);
	printf("%X\n",x);
	printf("%#x\n",x);
	printf("%#X\n",x);    //推荐使用的十六进制的格式 

	return 0;
}

/*
	在Dev中的运行结果是 
-------------------------------- 
21
21
0x21
0X21
-------------------------------- 
	总结：X还是大写好，比较符合十六进制的原定义格式 
*/











