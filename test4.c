#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


//int Add(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 10;
//	int c = 100;
//	int d = (a += 3, b = a - 5, c = a + b);//5
//	printf("%d\n", d);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//��Ҫ����5����ʹ��[],[]���±���ʲ�������
//	//����arr��4��[]������������
//	printf("%d\n", arr[4]);
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//()���Ǻ������ò�����
//	//()�Ĳ�������������
//	//Add��a��b����()�Ĳ�����
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 10;//�ֲ��������Զ��������Զ�����
//	//����Ҳ�������Զ�����������Ҳ���൱��:
//	//auto int a = 10;  autoһ�㱻ʡ��
//	return 0;
//}


//int main()
//{
//	//�����num�ŵ��Ĵ�����
//	//�Ų��ſ��������Լ�
//	register int num = 100;
//	return 0;
//}


////����������  ����    ��������
//typedef unsigned int  u_int;
//int main()
//{
//	//unsigned �޷�����
//	unsigned int num = 10;
//	u_int num2 = 20;
//	return 0;
//}


//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);//��ӡ10��2
//	//��Ϊa�Ǿֲ���������������������ʼ��
//	//�����������������������٣�����ÿһ�ζ������¶����ʼ��
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//void test()
//{
//	//static ���ξֲ�����
//	//�ı�(�ӳ�)�˾ֲ���������������
//	static int a = 1;
//	a++;
//	printf("%d ", a);//��ӡ2-11
//	//����static���κ󣬱���˾�̬���������������ӳ�
//	//�����������Ҳ������ʧ���´ν�����ʱ�������¶���a
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}



////�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


////static ���κ���
////�ı��˺�����������
////ʹ�ú���ֻ�������ڵ�.c�ļ��ڲ�ʹ��
////����.c�ļ�����ʹ��
////�������ڲ���Ӱ��
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


////#define���峣���ͺ�
////��ͺ�������
//#define M 1000
//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	printf("%d\n", M);
//	int a = 10;
//	int b = 20;
//	int m = MAX(a, b);
//	printf("%d\n", m);
//	return 0;
//}


////%p  ��ӡ��ַ
//int main()
//{
//	//��������˼�����ڴ�����4���ֽڵĿռ������10
//	int a = 10;
//	printf("%p\n", &a);//&a���ó�a��(��С��)��ַ
//	//��a�ĵ�ַ�浽ָ���������
//	int* pa = &a;//*��ʾpa�Ǹ�ָ�룬ָ��Ķ���������int
//	*pa = 20;//*pa����a����a��Ϊ��20
//	//*�ǽ����ò�����
//	return 0;
//}


struct Student
{
	char name[20];
	int age;
	char sex[10];
	float score;
};

int main()
{
	//����һ��s1ѧ������ʼ��
	struct Student s1 = { "����",20,"��",83.5f };
	//��ӡs1����Ϣ
	//ʹ�� ����.��Ա
	printf("%s %d %s %f\n", s1.name, s1.age, s1.sex, s1.score);
	struct Student* ps = &s1;
	//ʹ��ָ��1.
	printf("%s %d %s %f\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).score);
	//ʹ��ָ��� ->
	printf("%s %d %s %f\n", ps->name, ps->age, ps->sex, ps->score);
	return 0;
}
