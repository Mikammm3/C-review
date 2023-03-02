#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5
//	return 0;
//}
////程序的结果是什么？



//#include <stdio.h>
////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	//指针加减整数跳过对应类型大小
//	printf("%p\n", p + 0x1);//--->p+1--->0x100000+20--->0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//p是整型，-->p+1 ---> 0x100000+1-->0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//p是int*，-->p+1--->0x100000+4--->0x100004 
//	return 0;
//}

