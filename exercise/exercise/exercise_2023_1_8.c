#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


////дһ�������ӡ1-100֮������3�ı���������
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
////д���뽫�������������Ӵ�С�����
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
////дһ�����룺��ӡ100~200֮�������
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
//		//�ж�
//		int ret = isprime(i);
//		if (ret == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}



//#include<stdio.h>
//
////��ӡ1000�굽2000��֮�������
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
////���������������������������Լ��
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