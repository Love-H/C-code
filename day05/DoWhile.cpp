/*
	2018-10-16 07:40:30
	目的：循环求解一元二次方程用do...while实现
*/

#include <stdio.h>
#include <math.h>

int main() {
	double a,b,c;
	double delta;	//
	double x1,x2;	//方程的根
	char ch;

	do {
		//接收数据
		printf("请输入一元二次方程的三个系数:\n");
		printf("a = ");
		scanf("%lf", &a);

		printf("b = ");
		scanf("%lf", &b);

		printf("c = ");
		scanf("%lf", &c);

		delta = b*b - 4*a*c;

		//求解
		if (delta > 0) {
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("有两个解，x1 = %lf, x2 = %lf\n", x1, x2);
		} else if (0 == delta) {
			x1 = x2 = (-b) / (2*a);
			printf("有两个解，x1 = x2 = %lf\n", x1);
		} else {
			printf("该方程无解\n");
		}
		
		//判断是否退出循环 
		printf("您想继续么？(Y/N):");
		scanf(" %c", &ch);				//%c前面必须得加一个空格   ？？？ 
	} while('Y' == ch || 'y' == ch);


	return 0;
}

/*
	在dev中的输出结果是
----------------------------
请输入一元二次方程的三个系数:
a = 1
b = 3
c = 5
该方程无解
您想继续么？(Y/N):y
请输入一元二次方程的三个系数:
a = 1
b = 5
c = 6
有两个解，x1 = -2.000000, x2 = -3.000000
您想继续么？(Y/N):n

---------------------------- 

	总结：
		1.该问题用do...while解决较好
		  while循环因为需要在开头就先判断 ，所以得硬生生
		  先在开头加个多余的判断条件，才能开始循环,用着有点膈应
		   
*/
