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
////����Ľ����ʲô��



//#include <stdio.h>
////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	//ָ��Ӽ�����������Ӧ���ʹ�С
//	printf("%p\n", p + 0x1);//--->p+1--->0x100000+20--->0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//p�����ͣ�-->p+1 ---> 0x100000+1-->0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//p��int*��-->p+1--->0x100000+4--->0x100004 
//	return 0;
//}

