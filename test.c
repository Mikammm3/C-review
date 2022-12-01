#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
////主函数  ---程序主入口
////有且只有一个
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//%d 是打印整数，sizeof是计算类型的大小
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 20;
//	char ch = 'm';
//	float f = 3.14f;
//	return 0;
//}

#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d\n", sum);
	return 0;
}