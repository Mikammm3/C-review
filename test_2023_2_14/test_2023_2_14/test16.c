#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	int a = 20;//正数原码，反码，补码相同
//	//00000000000000000000000000010100  20的原码
//	//00000000000000000000000000010100  20的反码
//	//00000000000000000000000000010100  20的补码
//	int b = -10;
//	//10000000000000000000000000001010  10的原码
//	//11111111111111111111111111110101  10的反码
//	//11111111111111111111111111110110  10的补码
//	//FF FF FF F6
//	return 0;
//}



////设计一个函数判断当前机器是小端还是大端
//#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	if (check_sys() == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}



////输出什么？
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	//100000000000000000000000000000001  -1原码
//	//111111111111111111111111111111111  补码
//	//11111111 - 截断
//	//整型提升
//	//111111111111111111111111111111111  -1补码
//	signed char b = -1;//b同理
//	unsigned char c = -1;
//	//11111111 - 截断
//	//整型提升
//	//000000000000000000000000011111111  补码(8个1)
//	printf("a=%d,b=%d,c=%d", a, b, c);// -1 -1  255
//	return 0;
//}



////2.
//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000 原码
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000 - 截断
//	//整型提升
//	//11111111111111111111111110000000 补码
//	printf("%u\n", a);
//	return 0;
//}


////3.
//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000 原码
//	//10000000 - 截断
//	//11111111111111111111111110000000 补码
//	printf("%u\n", a);
//	return 0;
//}