#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>

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


//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = 1;
//	for (int j = 1; j <= i; j++)
//	{
//		ret *= j;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
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

//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//编写代码，演示多个字符从两端移动，向中间汇聚。
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "*****************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息1秒,使用前引用头文件windows.h
//		system("cls");//清空屏幕,使用前引用头文件stdlib.h
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成功，如果三次均输入错误，则退出程序。
//假设密码是123456
//int main()
//{
//	char pw[20] = { 0 };
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//         scanf("%s", pw);
//		 if (strcmp(pw, "123456") == 0)
//		 {
//			 flag = 1;
//			 printf("登录成功\n");
//			 break;
//		 }
//		 else
//		 {
//			 printf("密码错误\n");
//		 }
//	}
//	if (flag == 0)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}


//#include<stdio.h>
////在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
////求10个整数中最大值
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		if (i == 0)
//			max = n;
//		if (n > max)
//			max = n;
//	}
//	printf("max=%d\n", max);
//	return 0;
//}



//#include<stdio.h>
//
////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	double flag = 1.0;
//	double sum = 0.0;
//	double ret = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		ret = 1.0 / i * flag;
//		flag = (-flag);
//		sum += ret;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}


//#include<stdio.h>
////编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int cnt = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			cnt++;
//		if (i / 10 == 9)
//			cnt++;
//	}
//	printf("count=%d\n", cnt);
//	return 0;
//}