#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	//ȷ��ð����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//һ��ð������
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	//ð������(����)
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
////������A�е����ݺ�����B�е����ݽ��н�����
//void exchange(char A[], char B[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		char tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//
//}
//int main()
//{
//	char A[] = "abc";
//	char B[] = "def";
//	printf("����ǰ:\nA������Ϊ%s\nB������Ϊ%s\n", A, B);
//	int sz = sizeof(A) / sizeof(A[0]);
//	exchange(A, B, sz);
//	printf("������:\nA������Ϊ%s\nB������Ϊ%s\n", A, B);
//	return 0;
//}


//#include<stdio.h>
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[11] = { 1,2,3,4,5,11,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	printf("\n");
//	Reverse(arr, sz);
//	Print(arr, sz);
//	printf("\n");
//	Init(arr, sz);
//	Print(arr, sz);
//	return 0;
//}