/*
	2018-10-22 14:51:03
	Ŀ�ģ���Ѻ���д������������ 
*/ 

# include <stdio.h>

void f(void);		// 	1
	
//void f(void)			2 

//void f(int a);		3


int main(void)
{
	f();
	
	return 0;
}

void f(void)
{
	printf("��������\n");
}

/*
	��dev�е���������
-----------------------------	 
��������

-----------------------------	 

	�ܽ᣺
		1. ��û����mainǰд�������������ᱨ��
		   eg��[Error] 'f' was not declared in this scope
		2. ';' can not be lost  
		3. 'int a' can not be writtern,
			because the function should be the same as written below
*/ 
