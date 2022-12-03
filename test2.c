#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////全局变量
//int b = 20;
//
////声明外部符号
//extern int g_val;
//
//int main()
//{
//	//局部变量
//	int a = 10;
//	printf("%d\n", g_val);
//	return 0;
//}


////#define定义的标识符常量
//#define MAX 100
//
////枚举常量
//enum SEX
//{
//	MALE,//   0
//	FEMALE=5,// 5
//	SECRET//  6
//};
//
//#include<stdio.h>
//int main()
//{
//	//字面常量
//	100;
//
//	//const修饰的常变量
//	//本质上还是个变量
//	const int num = 100;
//	num = 200;//err
//
//	int arr[MAX] = { 0 };
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//"abc"--  'a'  'b'  'c'  '\0' 
//	char arr1[] = "abc";//隐藏了一个 \0
//	//数组：同一类型的变量的集合
//	char arr2[] = { 'a','b','c' };
//	//strlen是计算字符串长度，遇到\0停下来，计算\0之前的字符个数
//	printf("%d\n", strlen(arr1));//strlen是库函数，使用前要引用string.h
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("你要好好学习吗（1/0）\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲代码%d\n", line);
//		line++;
//	}
//	return 0;
//}