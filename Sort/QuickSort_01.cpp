#include <stdio.h>
int a[101],n;	//��Ҫ�ں�����ʹ�õ������Զ���Ϊȫ�ֱ��� 

void Qsort(int left, int right)
{
	if (left > right)
		return ;
	
	int i,j,temp,t;
	
	i = left;
	j = right;
	temp = 	a[left];
	
	while (i != j)
	{
		//�ȴ������� 
		while (a[j]>=temp && i<j)
			j--;
		//�ٴ�������	
		while (a[i]<=temp && i<j)
			i++;
		
		//�����������������е�λ��
		if (i<j)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}	
	}
	
	a[left] = a[i];
	a[i] = temp;
	
	Qsort(left, i-1);
	Qsort(i+1, right); 
	return ;
}

int main()
{
	int i,j;
	
	scanf("%d", &n);
	for (i=1; i<=n; i++)
		scanf("%d", &a[i]);
		
	Qsort(1,n);
	
	for (i=1; i<=n; i++)
		printf("%d ", a[i]);
		
	
	return 0;
}
