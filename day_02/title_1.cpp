/*
	2018-11-3 14:19:54
	修改温度转换程序，打印摄氏温度转换为相应华氏温度的转换表 
*/

#include <stdio.h>

int main()
{
	float fahr, celsius;						
	int lower, upper, step;	
	
	lower = 0;
	upper = 300;
	step = 20;
	
	printf("C	F\n\n");
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);			
		printf("%6.1f %3.0f\n", celsius, fahr);
		fahr = fahr + step;	
	}
	
	return 0;
} 
/*
	Output in Dev-C++
--------------------------------	 
C       F

 -17.8   0
  -6.7  20
   4.4  40
  15.6  60
  26.7  80
  37.8 100
  48.9 120
  60.0 140
  71.1 160
  82.2 180
  93.3 200
 104.4 220
 115.6 240
 126.7 260
 137.8 280
 148.9 300

--------------------------------	 
	Summary:
			

*/

