#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////ȫ�ֱ���
//int b = 20;
//
////�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	//�ֲ�����
//	int a = 10;
//	printf("%d\n", g_val);
//	return 0;
//}


////#define����ı�ʶ������
//#define MAX 100
//
////ö�ٳ���
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
//	//���泣��
//	100;
//
//	//const���εĳ�����
//	//�����ϻ��Ǹ�����
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
//	char arr1[] = "abc";//������һ�� \0
//	//���飺ͬһ���͵ı����ļ���
//	char arr2[] = { 'a','b','c' };
//	//strlen�Ǽ����ַ������ȣ�����\0ͣ����������\0֮ǰ���ַ�����
//	printf("%d\n", strlen(arr1));//strlen�ǿ⺯����ʹ��ǰҪ����string.h
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ��1/0��\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("�ô���%d\n", line);
//		line++;
//	}
//	return 0;
//}