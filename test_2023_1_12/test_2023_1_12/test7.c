#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	//C�������ṩ�˿����������õ� goto���ͱ����ת�ı�š�
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	printf("heihei\n");
//	goto again;
//	//��ѭ��
//	return 0;
//}



//�ػ�����
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char arr[20] = { 0 };
//	//60s��ػ�
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "������") == 0)
//		{
//			//ȡ���ػ�
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//strcpy�ַ�������
//char * strcpy ( char * destination, const char * source );
//char* �Ƿ������ͣ�
//source��Ҫ�������ַ�����destination��Ҫ�����ǵ��ַ���
//destҪ���㹻��Ŀռ��source����Ȼ�����Խ�����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "*************";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//memset�ڴ�����
//void * memset ( void * ptr, int value, size_t num );
//ptr�ǿ�ʼ�ڴ����õĵ�ַ
//value��Ҫ���õ��ַ�����'*'
//num��Ҫ���ö��ٸ��ֽ�

//#include<stdio.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}



// ret_type fun_name(para1, *)
// {
//	 statement;//�����
// }
//ret_type ��������
//fun_name ������
//para1 ��������


//дһ�����������ҳ����������е����ֵ
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//#include<stdio.h>
//void print()
//{
//	printf("xixixi\n");
//}
//int main()
//{
//	print();
//	return 0;
//}


//дһ���������Խ����������α���������
//����ʾ��
//#include<stdio.h>
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ��a=%d��b=%d\n", a, b);
//	Swap(a, b);
//	printf("������a=%d��b=%d\n", a, b);
//	return 0;
//}



//#include<stdio.h>
//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ��a=%d��b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������a=%d��b=%d\n", a, b);
//	return 0;
//}

