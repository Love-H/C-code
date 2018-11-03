/*
	2018-11-3 16:32:06
	目的：验证表达式 getchar() != EOF 的值到底是 0 还是 1  
*/

#include <stdio.h>

int main()
{
	int c;
	
	c = (getchar() != EOF);

	printf("%d\n", c);
		
	return 0;
}

/*	官方做法 
int main(void)
{
 printf("Press a key. ENTER would be nice :-)\n\n");
 printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);
 return 0;
}
*/
