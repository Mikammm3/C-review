#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
////接受一个整型值（无符号），按照顺序打印它的每一位。
//
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}


#include<stdio.h>
//编写函数求字符串的长度。
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//#include<stdio.h>
////编写函数不允许创建临时变量，求字符串的长度。
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//#include<stdio.h>
////求n的阶乘（递归）。
//int fac(int n)
//{
//	if (n > 1)
//		return n * fac(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
////求n的阶乘(迭代)
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


#include<stdio.h>
//求第n个斐波那契数(递归)
//int Fib(int n)
//{
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



//#include<stdio.h>
////求第n个斐波那契数(迭代)
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



//#include<stdio.h>
////编写一个函数实现n的k次方，使用递归实现。
//int my_pow(int n, int k)
//{
//	if (k >= 1)
//		return n * my_pow(n, k - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = my_pow(n, k);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}


////思路：
////首先把数组的首元素存到tmp里面
////然后再把数组的最后一个元素放到首元素里
////然后将首元素和最后一个元素之间的元素逆序
////最后将tmp的元素放到最后一个元素里
//#include<stdio.h>
////字符串逆序（递归实现）
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int sz = strlen(str);
//	*str = *(str + sz - 1);
//	*(str + sz - 1) = '\0';
//	if (strlen(str) >= 2)
//		reverse_string(str + 1);
//	*(str + sz - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}