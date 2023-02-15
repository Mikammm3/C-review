#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char arr[20] = { 0 };
//	//60s后关机
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，则取消关机\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0)
//		{
//			//取消关机
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//1. 写一个函数可以判断一个数是不是素数。
//2. 写一个函数判断一年是不是闰年。
//3. 写一个函数，实现一个整形有序数组的二分查找。
//4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1

//#include<stdio.h>
//#include<math.h>
////1. 写一个函数可以判断一个数是不是素数。
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

//2. 写一个函数判断一年是不是闰年。
//int is_leap_year(int n)
//{
//	条件成立则为真，返回非0
//	条件不成立为假，返回0
//	return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		判断y是否为闰年
//		如果是闰年返回1
//		不是闰年返回0
//		if (is_leap_year(y))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
////3. 写一个函数，实现一个整形有序数组的二分查找。
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
//		printf("找到了，下标是：%d\n", ret);
//	else
//		printf("找不到\n");
//	return 0;
//}


//#include<stdio.h>
////4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1
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