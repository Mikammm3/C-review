#define _CRT_SECURE_NO_WARNINGS 1

//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分

//#include<stdio.h>
//#include<assert.h>
//void sort(int* arr, int sz)
//{
//	assert(arr);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] % 2 == 0)
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<assert.h>
////模拟实现库函数strcpy
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* tmp = dest;
//	while (*dest++ = *src++);
//	return tmp;
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[100] = { 0 };
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}



//求n的阶乘（n<=1000）

//#include<stdio.h>
//void Print_Factorial(const int N)
//{
//	if (N < 0)
//		printf("Invalid input");
//	else
//	{
//		int arr[3000] = { 0 };
//		int i = 0;
//		int arrlength = 1;
//		int rest = 0;
//		arr[0] = 1;  
//		for (i = 1; i <= N; i++)
//		{
//			int j = 0;
//			for (j = 0; j < arrlength; j++)
//			{
//				int tmp = i * arr[j] + rest;
//				arr[j] = tmp % 10;
//				rest = tmp / 10;
//			}
//			while (rest)
//			{
//				arr[arrlength++] = rest % 10;
//				rest /= 10;
//			}
//		}
//		for (i = arrlength - 1; i >= 0; i--)
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
//}