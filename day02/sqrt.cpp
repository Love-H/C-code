#include <stdio.h>
#include <math.h>

int main() {
	int a = 1,b = 2,c = 1;
	float delta;	//��ŵ���b*b-4*a*c
	float x1,x2;	//���һԪ���η��̵Ľ� 
	
	delta = b*b-4*a*c;
	
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("��һԪ���η���������x1 = %f,x2 = %f\n",x1,x2);
	}
	else if (delta == 0)
	{
		x1 = x2 = (-b)/(2*a);
		printf("Ψһ��x1 = x2 = %f\n",x1);
	}
	else {
		printf("�÷����޽�");
	}  
}   
