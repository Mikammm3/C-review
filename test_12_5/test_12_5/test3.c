#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////����1.
////�Ӽ�������5���˵���ߣ��ף��������ǵ�ƽ����ߣ��ף���
//int main()
//{
//	float hi = 0;
//	int i = 0;
//	float sum = 0;
//	while (i < 5)
//	{
//		scanf("%f",&hi);
//		sum += hi;
//		i++;
//	}
//	printf("%.2f\n", sum / 5);
//	return 0;
//}

//����2.
//��˵����140�����߳�Ϊ��ţ�KiKi��֪�����Լ��ǲ�����ţ����������жϡ�
//�������룬����һ��������ʾһ���˵����̣�������ڵ���140�����������һ����ţ������Genius����
//int main()
//{
//	int iq = 0;
//	//��������������룡����
//	while (scanf("%d", &iq) != EOF)
//	{
//		if (iq >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr1[] = { 'b','i','t' };
//	printf("%d\n", strlen(arr1));//���ֵ
//
//	//����ȫ��ʼ��,������4��Ԫ�أ���ʼ����3��������һ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[4] = { 'b','i','t' };
//	printf("%d\n", strlen(arr2));//3
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	//����Ķ���
//	char ch[5];
//	//����Ķ��岢��ʼ��
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//�ַ������ֳ�ʼ����ʽ
//	char c1[] = "bit";
//	char c2[] = { 'b','i','t' };
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	while (i < 10)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 21;
//	int b = 4;
//	printf("%d\n", a / b);//5
//	printf("%d\n", a % b);//1
//	//  ����/  / - �õ�������
//	//  ����/�����������������������ִ�е�����������
//	//  ֻҪ��һ���Ǹ�������ִ�еľ��Ǹ������ĳ���
//	//  ȡģ%  % - �õ���������������%���߲���������������
//	return 0;
//}


//int main()
//{
//	int flag = 3;
//	//flagΪ�棬��ӡhehe
//	if (flag)
//		printf("hehe\n");
//	//���!flagΪ�棬��ӡhaha -----> flagΪ�٣���ӡhaha
//	if (!flag)
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof(arr));//����������ܴ�С4*10
//	printf("%d\n", sizeof(arr[0]));//������Ԫ�صĴ�С
//	//����Ԫ�ظ���=�ܴ�С/ÿ��Ԫ�صĴ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	return 0;
//}

//int main()
//{
//	// && ����
//	int age = 21;
//	if (age > 18 && age < 30)
//	{
//		;
//	}
//	// || ����
//	if (age > 18 || age < 30)
//	{
//		;
//	}
//	return 0;
//}

//int cmp(int x, int y)
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = cmp(a, b);
//	printf("%d\n", ret);
//	return 0;
//}