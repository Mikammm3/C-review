#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char arr[20] = { 0 };
//	//60s��ػ�
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "������") == 0)
//		{
//			//ȡ���ػ�
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//1. дһ�����������ж�һ�����ǲ���������
//2. дһ�������ж�һ���ǲ������ꡣ
//3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//4. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1

//#include<stdio.h>
//#include<math.h>
////1. дһ�����������ж�һ�����ǲ���������
//int is_prime(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//2. дһ�������ж�һ���ǲ������ꡣ
//int is_leap_year(int n)
//{
//	����������Ϊ�棬���ط�0
//	����������Ϊ�٣�����0
//	return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		�ж�y�Ƿ�Ϊ����
//		��������귵��1
//		�������귵��0
//		if (is_leap_year(y))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
////3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret != -1)
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}


//#include<stdio.h>
////4. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1
//
//void test(int* cnt)
//{
//	(*cnt)++;
//}
//
//int main()
//{
//	int cnt = 0;
//	test(&cnt);
//	printf("%d\n", cnt);
//	return 0;
//}


//#include<stdio.h>
//void print(int k)
//{
//	int i = 0;
//	for (i = 1; i <= k; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	print(k);
//	return 0;
//}