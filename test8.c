#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//函数的嵌套调用和链式访问：

//函数的嵌套调用
//void print()
//{
//	printf("hehe\n");
//}
//void three_print()
//{
//	print();
//}
//int main()
//{
//	three_print();
//	return 0;
//}


////链式访问：把一个函数的返回值作为另外一个函数的参数。
//int main()
//{
//	//打印4321
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//#include<stdio.h>
//
////函数的声明
//int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}

#include<stdio.h>

//int a;//函数的声明
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}
//int a = 10;//函数的定义

#include"add.h"

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	return 0;
//}

