#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�ж�i�Ƿ��������
		//1. ����i��λ�� - n
		int n = 1;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp = tmp / 10;
		}
		//2. ����i��ÿһλ��n�η�֮��
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			//pow��������η���
			sum += pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		//3. �ж�
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
