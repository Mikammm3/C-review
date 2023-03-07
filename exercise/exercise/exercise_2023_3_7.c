#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
////打印菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	for (int i = 0; i < line; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < line - 1; i++)
//	{
//		//打印空格
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (int j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}