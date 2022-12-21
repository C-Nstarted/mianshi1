#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否会自幂数
		//1. 计算i的位数 - n
		int n = 1;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp = tmp / 10;
		}
		//2. 计算i的每一位的n次方之和
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			//pow是用来求次方数
			sum += pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		//3. 判断
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
