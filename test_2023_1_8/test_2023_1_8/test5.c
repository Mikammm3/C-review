#define _CRT_SECURE_NO_WARNINGS 1
//分支语句和循环语句

//分支语句
//if
//switch

//循环语句
//while
//for
//do while

//goto语句


//控制语句：选择语句，循环语句，转向语句


//分支语句：
//if(表达式)
//   语句;

//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//			printf("中年\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//
//}

//switch语句(defualt,break)
//switch (整型表达式) 
//{
//	语句项；
//}

//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}



//while (表达式)
//循环语句;

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}


//getchar是用来获取一个字符的
//putchar是用来打印一个字符的

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//		getchar();//处理\n
//	}
//	return 0;
//}

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int ch = 0;
//	char arr[20] = { 0 };
//	printf("请输入密码\n");
//	scanf("%s", arr);
//	while (getchar() != '\n')
//	{
//		;//处理缓冲区的\n
//	}
//	printf("请确认密码:>(Y/N)\n");
//	ch = getchar();
//	if (ch == 'Y')
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}
