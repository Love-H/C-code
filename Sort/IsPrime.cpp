/*
	2018-10-22 12:56:35
	Ŀ�ģ��жϸ����Ƿ�Ϊ���� 
*/ 

# include <stdio.h>

bool IsPrime(int a)
{
	int i;
	
	for(i=2; i<a; i++)	// It is easy to write wrong  ( i = 0 )
	{
		if (a%i == 0)
			break;	
	}
		if (i == a)
		return true;
		else
		return false;
}

int main()
{
	int num;
	
	printf("������Ҫ�жϵ�����:\n");
	scanf("%d", &num);
	
	if ( IsPrime(num) )
		printf("Yes\n");
	else
		printf("No\n");
		
	return 0; 
			
}

/*
	��dev�е���������
---------------------------------- 
������Ҫ�жϵ�����:
23
Yes

----------------------------------

	�ܽ᣺
		1.���׺��������ж�ʱ��ѭ��Ӧ�ô�2��ʼ��������� i = 1 ʱ���˳�ѭ���� 
		2.�������ܾ�����һ���������ظ�ʹ�� 
			��  return true ����ʡȥ�����û�����ʱ���Լ�ѡ����δ����� 
*/


