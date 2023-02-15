#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////例题1.
////从键盘输入5个人的身高（米），求他们的平均身高（米）。
//int main()
//{
//	float hi = 0;
//	int i = 0;
//	float sum = 0;
//	while (i < 5)
//	{
//		scanf("%f",&hi);
//		sum += hi;
//		i++;
//	}
//	printf("%.2f\n", sum / 5);
//	return 0;
//}

//例题2.
//据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。
//多组输入，输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
//int main()
//{
//	int iq = 0;
//	//经典多组数据输入！！！
//	while (scanf("%d", &iq) != EOF)
//	{
//		if (iq >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr1[] = { 'b','i','t' };
//	printf("%d\n", strlen(arr1));//随机值
//
//	//不完全初始化,数组有4个元素，初始化了3个，还有一个默认初始化为0
//	char arr2[4] = { 'b','i','t' };
//	printf("%d\n", strlen(arr2));//3
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	//数组的定义
//	char ch[5];
//	//数组的定义并初始化
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//字符的两种初始化方式
//	char c1[] = "bit";
//	char c2[] = { 'b','i','t' };
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	while (i < 10)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 21;
//	int b = 4;
//	printf("%d\n", a / b);//5
//	printf("%d\n", a % b);//1
//	//  除法/  / - 得到的是商
//	//  除法/操作数两端如果都是整数，执行的是整数除法
//	//  只要有一个是浮点数，执行的就是浮点数的除法
//	//  取模%  % - 得到的是余数，并且%两边操作数必须是整数
//	return 0;
//}


//int main()
//{
//	int flag = 3;
//	//flag为真，打印hehe
//	if (flag)
//		printf("hehe\n");
//	//如果!flag为真，打印haha -----> flag为假，打印haha
//	if (!flag)
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof(arr));//整个数组的总大小4*10
//	printf("%d\n", sizeof(arr[0]));//数组首元素的大小
//	//数组元素个数=总大小/每个元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
//	return 0;
//}

//int main()
//{
//	// && 并且
//	int age = 21;
//	if (age > 18 && age < 30)
//	{
//		;
//	}
//	// || 或者
//	if (age > 18 || age < 30)
//	{
//		;
//	}
//	return 0;
//}

//int cmp(int x, int y)
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = cmp(a, b);
//	printf("%d\n", ret);
//	return 0;
//}