#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	//ָ������ - ������ - ��ŵ���ָ��
//	char* arr[4];
//	//����ָ�� - ��ָ�� - ָ��������飬��ŵ�������ĵ�ַ
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	return 0;
//}






//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("\n");
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}
//


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//p  ---- &arr
//	//*p ---- *&arr
//	//*p ---- arr
//	for (int i = 0; i < 10; i++)
//	{
//		//printf("%d ", *((*p) + i));
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
//
//void print(int(*p)[5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//��ά���鴫�Σ������Ƕ�ά�������Ԫ�ص�ַ
//	//�����ǵ�һ�еĵ�ַ����һ��һά����ĵ�ַ
//	print(arr,3,5);
//	return 0;
//}

