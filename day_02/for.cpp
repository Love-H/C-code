/*
	2018-11-3 15:59:45
	目的：修改温度转换程序，要求以逆序（即从 300 到 0）输出 
*/

#include <stdio.h>

int main()
{
	int fahr;
	
	for(fahr=300; fahr>=0; fahr -= 20)							// fallibility: fahr <= 0 !!!
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
