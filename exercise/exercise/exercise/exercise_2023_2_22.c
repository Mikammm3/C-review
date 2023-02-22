#define _CRT_SECURE_NO_WARNINGS 1

//typedef void(*pf)(int);//对void(*)(int)重命名为pf
//
//#include<stdio.h>
//int main()
//{
//	//下面两段代码是什么意思？
//
//	//代码1
//	//这是一次函数调用
//	(*  ( void (*)() ) 0)();
//	//将0强制类型转换成 void (*)() 类型的函数指针，
//	//这个函数指针类型所指向的函数没有参数也没有返回值
//	//这就意味着0的地址处放着一个函数
//	//然后再通过解引用0来调用这个函数
//
//
//
//	//代码2
//	//这是一个函数声明
//	void (* signal(int, void(*)(int) ) )(int);//找名词，从名词入手
//	//signal有两个参数，一个是int类型，一个是void(*)(int)类型的函数指针
//	//signal的第二个参数类型是函数指针类型，指向的函数的参数是int类型，没有返回值
//	//signal的返回类型是 void(*)(int) 类型的函数指针
//	return 0;
//}