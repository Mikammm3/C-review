#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////��ϣ����
//void shell_sort(int arr[], int sz)
//{
//	//gap�ǲ�������arr[0]��ʼ��ÿ��gap�����ͽ��бȽ�һ��(����)
//	for (int gap = sz / 2; gap > 0; gap /= 2)
//	{
//		for (int i = gap; i < sz; i++)//ͬһ��ıȽ�
//		{
//			//����� < ǰ���
//			if (arr[i] < arr[i - gap])//��arr[0]��ʼ�Ƚ�
//			{
//				//�������򣬰�i����1����i-gap(k)����0
//				//����
//				int tmp = arr[i];
//				int k = i - gap;//Ҫ����������±�
//				while (k >= 0 && arr[k] > tmp)
//				{
//					arr[k + gap] = arr[k];//����Ų
//					k -= gap;
//				}
//				arr[k + gap] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	shell_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//ElementType Median(ElementType A[], int N)
//{
//    //ϣ������
//    for (int gap = N / 2; gap > 0; gap /= 2)
//    {
//        for (int i = gap; i < N; i++)
//        {
//            if (A[i] < A[i - gap])
//            {
//                ElementType tmp = A[i];
//                int k = i - gap;
//                while (k >= 0 && A[k] > tmp)
//                {
//                    A[k + gap] = A[k];
//                    k -= gap;
//                }
//                A[k + gap] = tmp;
//            }
//        }
//    }
//    return A[N / 2];
//}




////��n(n<=1000)�Ľ׳�
//#include <stdio.h>
//
//void Print_Factorial(int n)
//{
//	if (n < 0)
//		printf("Invalid input\n");
//	else
//	{
//		int arr[3000] = { 0 };
//		int arrlength = 1;
//		arr[0] = 1;//0��= 1
//		int rest = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			//�����ִ��������
//			for (int j = 0; j < arrlength; j++)
//			{
//				int tmp = arr[j] * i + rest;
//				arr[j] = tmp % 10;
//				rest = tmp / 10;
//			}
//			//��λ
//			while (rest)
//			{
//				arr[arrlength++] = rest % 10;
//				rest /= 10;
//			}
//		}
//		for (int i = arrlength - 1; i >= 0; i--)
//		{
//			printf("%d", arr[i]);
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print_Factorial(n);
//	return 0;
//}