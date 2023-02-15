#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


////写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}



//#include<stdio.h>
////写代码将三个整数数按从大到小输出。
//int main()
//{
//	int arr[3] = { 0 };
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			int tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}
//	}
//	printf("%d %d %d", arr[0], arr[1], arr[2]);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
////写一个代码：打印100~200之间的素数
//int isprime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			break;
//	}
//	if (i > sqrt(n))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断
//		int ret = isprime(i);
//		if (ret == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}



//#include<stdio.h>
//
////打印1000年到2000年之间的闰年
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}


//#include<stdio.h>
////给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)
//	{
//		int tmp = a % b;
//		a = b;
//		b = tmp;
//	}
//	printf("%d", b);
//	return 0;
//}

#include<stdio.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int flag = 0;
//    for (int i = 1; i <= 100; i++)
//    {
//        for (int j = i; j <= 100; j++)
//        {
//            if ((i * i + j * j) == n)
//            {
//                printf("%d %d\n", i, j);
//                flag = 1;
//            }
//        }
//    }
//    if (flag == 0)
//        printf("No Solution\n");
//    return 0;
//}