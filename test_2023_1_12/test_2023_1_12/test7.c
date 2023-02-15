#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	//C语言中提供了可以随意滥用的 goto语句和标记跳转的标号。
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	printf("heihei\n");
//	goto again;
//	//死循环
//	return 0;
//}



//关机程序
//#include<stdlib.h>
//#include<string.h>
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


//strcpy字符串拷贝
//char * strcpy ( char * destination, const char * source );
//char* 是返回类型，
//source是要拷贝的字符串，destination是要被覆盖的字符串
//dest要有足够大的空间放source，不然会造成越界访问
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "*************";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//memset内存设置
//void * memset ( void * ptr, int value, size_t num );
//ptr是开始内存设置的地址
//value是要设置的字符，如'*'
//num是要设置多少个字节

//#include<stdio.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}



// ret_type fun_name(para1, *)
// {
//	 statement;//语句项
// }
//ret_type 返回类型
//fun_name 函数名
//para1 函数参数


//写一个函数可以找出两个整数中的最大值
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//#include<stdio.h>
//void print()
//{
//	printf("xixixi\n");
//}
//int main()
//{
//	print();
//	return 0;
//}


//写一个函数可以交换两个整形变量的内容
//错误示范
//#include<stdio.h>
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前，a=%d，b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后，a=%d，b=%d\n", a, b);
//	return 0;
//}



//#include<stdio.h>
//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前，a=%d，b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后，a=%d，b=%d\n", a, b);
//	return 0;
//}

