#include <stdio.h>

int main()
{
	int a[15],i,j,num;
	
	//��ʼ������Ϊ0 
	for (i=0; i<=15; i++)
		a[i]=0;
		
	//ѭ�������������
	for (i=1; i<=5; i++)
	{
		printf("�������%dλӢ��ɱ����:\n", i);
		scanf("%d", &num);					//��ÿ�����ֶ�������num��
		a[num]++;							//���м���
	} 
	
	for (i=15; i>=0; i--)				    //�����ж�a[0]~a[15]
		for (j=1; j<=a[i]; j++)				//���ּ��ξʹ�ӡ����
			printf("%d ", i);
			
	return 0;
}
