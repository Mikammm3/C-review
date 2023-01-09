#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>

//int main()
//{
//	int i = 0;
//	//for循环
//	//  初始化   判断    调整
//	for (i = 0; i < 10; i++)//打印10次
//	{
//		printf("%d ", i);//打印0-9
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


//练习求1！+2！+3！+.......+n!
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//求1！+2！+3！+.......+n!
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//二分查找法
//在一个【有序】数组中查找具体的某个数字n
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
//		//int mid = (left + right) / 2;//有越界风险
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("找不到\n");
//	return 0;
//}

//Sleep(1000) 休息一秒，使用前引用windows.h
//system("cls") 清空屏幕，使用前引用stdlib.h



//写一个猜数字游戏
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
	//1.生成随机数
	int ret = rand() % 100 + 1;
	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜中了^o^\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	do
	{
		//设定随机数
		srand((unsigned int)time(NULL));
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("猜数字游戏(ps:数字范围：1~100)\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}
