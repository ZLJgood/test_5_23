#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (i = 0; i < sz; i++)
//		scanf("%d", &arr[i]);
//	int max = arr[0];
//	int count = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			count = i;
//		}
//	}
//	printf("max=%d,�±�Ϊ��%d", max, count);
//	return 0;
//}
//����

//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);//2 5
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֡�


//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//���0��100000֮������С�ˮ�ɻ������������


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		//�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j <2*(line-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��ӡ����


int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;

	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	return 0;
}