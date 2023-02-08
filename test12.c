#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	//c是多少？
//	//13
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//	return 0;
//}


//#include<stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	test();
//	printf("%d\n", Max(10, 20));
//	return 0;
//}

//#include<stdio.h>
//struct S
//{
//	int num;
//	char ch;
//};
//int main()
//{
//	struct S s = { 100,'b' };
//	struct S* p = &s;
//	printf("%d\n", p->num);
//	printf("%c\n", p->ch);
//	printf("%d\n", s.num);
//	printf("%c\n", s.ch);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = 3;
//	//00000011
//	char b = 127;
//	//01111111
//	char c = a + b;
//	//整型提升
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010-截断  ----c
//	printf("%d\n", c);
//	//11111111111111111111111110000010
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110  -126
//	return 0;
//}


