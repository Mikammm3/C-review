#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//    double pi = 1.0, sum = 1.0, ret, t;
//    scanf("%lf", &t);
//    int i = 1;
//    while (pi > t)
//    {
//        pi = pi * i / (2 * i + 1);
//        sum += pi;
//        i++;
//    }
//    printf("%.6lf\n", sum * 2);
//    return 0;
//}


//int main()
//{
//	unsigned char a = 200;
//	//00000000000000000000000011001000
//	//11001000 - 截断
//	unsigned char b = 100;
//	//00000000000000000000000001100100
//	//01100100 - 截断
//	unsigned char c = 0;
//	//00000000 - 截断
//	c = a + b;
//	//00000000000000000000000011001000
//	//00000000000000000000000001100100
//	//00000000000000000000000100101100
//	//0010 1100 - 截断
//	printf(" %d %d", a + b, c);//300 44
//	return 0;
//}


//unsigned int a = 0x1234; //00 00 12 34
//unsigned char b = *(unsigned char*)&a;


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if ((a * b * c * d * e == 120) && (a + b + c + d + e == 15))
//								printf("A=%d B=%d C=%d D=%d E=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//#include<stdio.h>
//int main()
//{
//	char killer = 'A';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("killer=%c\n", killer);
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100][100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (j == 0 || (i == j))
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			if (arr[i][j] != 0)
//				printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}