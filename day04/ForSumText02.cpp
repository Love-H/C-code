/*
	2018-10-15 13:24:38
	�����򲻶ԣ���Ϊѭ���и��µı������ܶ���ɸ����� 
*/

#include <stdio.h>

int main()
{
	float i;
	float sum;
	
	for (i = 1.0; i <= 100; i++)		//��Ȼ�ܹ�������������п��ܴ���Ľ����׼ȷ 
	{
		sum += 1 / i;
	}
	printf("�ۼӵĽ���ǣ�%f\n", sum);
	
	return 0;
}

/*
	��dev�е���������
---------------------------	 
�ۼӵĽ���ǣ�5.187378
---------------------------	 

	�ܽ᣺
		��������Ȼ�ǶԵģ�������ʵ�п��ܷ�������
		
		�������Ĵ��������������
			1.float��double�����ܱ�֤���Ծ�ȷ�Ĵ���һ��С��
				�������6.2346��ֵ��X,�п��ܼ����������� X = 6.234599
		
			Demo:
				��һ�������ͱ���X������ж�X��ֵ�Ƿ�Ϊ�㣿
					if (|X - 0.000001 | < 0.000001)
	 					��
					else
	  					����	 
				
			2.ѭ���и��µı������ܶ���ɸ�����
			 
*/ 
