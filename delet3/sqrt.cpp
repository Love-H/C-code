#include <stdio.h>
#include <math.h>

int main() {
	int a = 1,b = 2,c = 1;
	float delta;	//存放的是b*b-4*a*c
	float x1,x2;	//存放一元二次方程的解 
	
	delta = b*b-4*a*c;
	
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("该一元二次方程两个解x1 = %f,x2 = %f\n",x1,x2);
	}
	else if (delta == 0)
	{
		x1 = x2 = (-b)/(2*a);
		printf("唯一解x1 = x2 = %f\n",x1);
	}
	else {
		printf("该方程无解");
	}  
}   
