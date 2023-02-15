#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			printf("test\n");
//		}
//		arr[i] = i;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	//断言
//	assert(dest && src);
//	char* tmp = dest;
//	//将src所指向的字符串拷贝dest所指向的空间中
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回拷贝后的dest的地址
//	return tmp;
//}
////模拟实现strcpy
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int n = 20;
//	const int* p = &a;
//	*p = 100;//err
//	p = &n;//ok
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 100;
//	int n = 20;
//	int* const p = &a;
//	p = &n;//err
//	*p = 0;//ok
//	return 0;
//}


