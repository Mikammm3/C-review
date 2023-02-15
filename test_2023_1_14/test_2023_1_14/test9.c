#define _CRT_SECURE_NO_WARNINGS 1

//数组

#include<stdio.h>

//int main()
//{
//	//一维数组的创建
//	int arr[10];
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	return 0;
//}


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组的完全初始化
//	int arr2[10] = { 1,2,3 };//数组的不完全初始化,剩下没有被初始化的元素默认为0
//	char arr3[10] = "abcdef";
//	char arr4[10] = { 'a','b','c' };
//	char arr5[] = "hehe";
//	return 0;
//}



//int main()
//{
//	//一维数组的使用
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//数组也是有类型的，数组去掉名字就是数组的类型
//	int arr[10] = { 0 };//int [10]
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		// *(p + i)就相当于arr[i]
//		printf("%d == %d\n", *(p + i), arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	//二维数组的创建
//	int arr[3][4];
//	//创建了一个三行四列的二维数组
//	return 0;
//}



//int main()
//{
//	//二维数组的初始化
//	//二维数组的行可以省略，但列不可以省略
//	int arr1[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int arr2[2][4] = { 1,2,3,4,5,6,7,8 };
//	int arr3[][4] = { {1,2,3,4},{5,6,7,8} };
//	return 0;
//}



//int main()
//{
//	//二维数组的使用
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i + j;
//			printf("arr[%d][%d]=%-2d ", i, j, arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

