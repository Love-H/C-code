/*
	2018-11-3 16:32:06
	Ŀ�ģ���֤���ʽ getchar() != EOF ��ֵ������ 0 ���� 1  
*/

#include <stdio.h>

int main()
{
	int c;
	
	c = (getchar() != EOF);

	printf("%d\n", c);
		
	return 0;
}

/*	�ٷ����� 
int main(void)
{
 printf("Press a key. ENTER would be nice :-)\n\n");
 printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);
 return 0;
}
*/
