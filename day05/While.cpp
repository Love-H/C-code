/*
	2018-10-16 07:56:01 
	目的：循环求解一元二次方程用while实现 
*/ 

#include <stdio.h>
#include <math.h>

int main()
{	
	double a,b,c;
	double delta;	//
	double x1,x2;	//方程的根
	char ch;		//储存是否退出的条件 
	
	printf("是否开始进行判断？(Y/N):");
	scanf("%c", &ch);
	
	while ('Y'==ch || 'y'==ch)
	{
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
		printf("是否接着进行判断？(Y/N):");
		scanf(" %c", &ch);						//%c前面必须加个空格 
	}
}

/*
	在dev中的输出结果是
------------------------------------------ 
是否开始进行判断？(Y/N):y
请输入一元二次方程的三个系数:
a = 1
b = 3
c = 5
该方程无解
是否接着进行判断？(Y/N):y
请输入一元二次方程的三个系数:
a = 1
b = 5
c = 6
有两个解，x1 = -2.000000, x2 = -3.000000
是否接着进行判断？(Y/N):n

------------------------------------------- 

	总结：
		1. %c前面必须加个空格
*/

