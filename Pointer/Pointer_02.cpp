#include <stdio.h>

int main()
{
	int x = 1, y = 2, z[10],n;
	int *p;
	
	p = &x;
	printf("*pΪ%d\n", *p);	
	
	y = *p;
	printf("yΪ%d\n", y);
	
	printf("\n");
	
	*p = 0;
	printf("xΪ%d\n",x);
	printf("*pΪ%d\n", *p);

	printf("\n");
		
	x = 2;
	printf("xΪ%d\n",x);
	printf("*pΪ%d\n", *p);

	printf("\n");
		
	p = z;
	printf("pΪ%d\n", p);
	printf("*pΪ%d\n", *p);
	
	p = &z[0];
	printf("pΪ%d\n", p);
	printf("*pΪ%d\n", *p);
		
	return 0; 
}
