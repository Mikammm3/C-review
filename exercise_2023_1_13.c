#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
////����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
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
//��д�������ַ����ĳ��ȡ�
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
////��д��������������ʱ���������ַ����ĳ��ȡ�
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
////��n�Ľ׳ˣ��ݹ飩��
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
////��n�Ľ׳�(����)
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
//���n��쳲�������(�ݹ�)
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
////���n��쳲�������(����)
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
////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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
////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
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


////˼·��
////���Ȱ��������Ԫ�ش浽tmp����
////Ȼ���ٰ���������һ��Ԫ�طŵ���Ԫ����
////Ȼ����Ԫ�غ����һ��Ԫ��֮���Ԫ������
////���tmp��Ԫ�طŵ����һ��Ԫ����
//#include<stdio.h>
////�ַ������򣨵ݹ�ʵ�֣�
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


//˼·��
//�Ƚ�n-1�����Ӵ�A����C�ŵ�B��
//�ٽ�����µ����Ӵ�AŲ��C��
//���B��n-1�����Ӵ�B����AŲ��C��
#include<stdio.h>
//��ŵ��
//Hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf("%c -> %c\n", A, C);
//	else
//	{
//		Hanoi(n - 1, A, C, B);
//		printf("%c -> %c\n", A, C);
//		Hanoi(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	Hanoi(n, a, b, c);
//	return 0;
//}



////˼·
////�����1��̨�ף���ô����Ϊ1
////�����2��̨�ף���ô����Ϊ2
////������n��̨�׵�һ������n-1�ķ���+��n-2�ķ����з�����
////��쳲�������������
//#include<stdio.h>
////������̨��
//int frog(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	return frog(n - 1) + frog(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = frog(n);
//	printf("%d\n", ret);
//	return 0;
//}