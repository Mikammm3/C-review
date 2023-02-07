#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//求值
//#include <stdio.h>
//int main()
//{
//	int num1 = 1;
//	//00000000000000000000000000000001
//	int num2 = 2;
//	//00000000000000000000000000000010
//	int a = num1 & num2;//0
//	int b = num1 | num2;//3
//	int c = num1 ^ num2;//3
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}



////不能创建临时变量（第三个变量），实现两个数的交换
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}




////编写代码实现：求一个整数存储在内存中的二进制中1的个数
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	while (n)
//	{
//		if (n & 1 == 1)
//			count++;
//		n >>= 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//求结果
//1 3 3 4
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;//9
//	c = ++a;//8
//	b = ++c, c++, ++a, a++;//7
//	b += a++ + c;//23
//	printf("a = %d b = %d c = %d\n:", a, b, c);//9 23 8
//	return 0;
//}



//int NumberOf1(int n)
//{
//    int count = 0;
//    unsigned int num = (unsigned)n;
//    while (num)
//    {
//        if (num & 1 == 1)
//            count++;
//        num >>= 1;
//    }
//    return count;
//}



////获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int tmp = n;
//	int i = 0;
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	return 0;
//}


//输入两个整数，求两个整数二进制格式有多少个位不同
//#include<stdio.h>
//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d %d", &a, &b);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a % 2) != (b % 2))
//			count++;
//		a /= 2;
//		b /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}