#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>

//int main()
//{
//	int i = 0;
//	//forѭ��
//	//  ��ʼ��   �ж�    ����
//	for (i = 0; i < 10; i++)//��ӡ10��
//	{
//		printf("%d ", i);//��ӡ0-9
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//��ϰ��1��+2��+3��+.......+n!
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//��1��+2��+3��+.......+n!
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//���ֲ��ҷ�
//��һ�������������в��Ҿ����ĳ������n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int flag = 0;
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;//��Խ�����
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			flag = 1;
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("�Ҳ���\n");
//	return 0;
//}

//Sleep(1000) ��Ϣһ�룬ʹ��ǰ����windows.h
//system("cls") �����Ļ��ʹ��ǰ����stdlib.h



//дһ����������Ϸ
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("***********************\n");
	printf("*****   1. play   *****\n"); 
	printf("*****   0. exit   *****\n");
	printf("***********************\n");
}

void game()
{
	//1.���������
	int ret = rand() % 100 + 1;
	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬������^o^\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	do
	{
		//�趨�����
		srand((unsigned int)time(NULL));
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ(ps:���ַ�Χ��1~100)\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}
