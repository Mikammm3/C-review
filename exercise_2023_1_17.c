#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int sum = 0;
//    int count = 0;
//    for (i = 2;; i += 3)
//    {
//        sum += i;
//        count++;
//        if (count == n)
//            break;
//    }
//    printf("%d", sum);
//    return 0;
//}


#include <stdio.h>

//int main()
//
//{
//    int n = 0;
//    scanf("%d", &n);
//    int start = n * (n - 1) + 1;
//    int i = 0;
//    printf("%d", start);
//    for (i = 1; i < n; i++)
//    {
//        start += 2;
//        printf("+%d", start);
//    }
//    return 0;
//}


//#define ROW 9
//#define COL 9
//#define ROWS ROW+2
//#define COLS COL+2
//#define EASY_COUNT 10
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//void menu()
//{
//	printf("******************************\n");
//	printf("******      1. play     ******\n");
//	printf("******      0. exit     ******\n");
//	printf("******************************\n");
//}
//
//
//void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch)
//{
//	int i = 0;
//	for (i = 0; i < rows; i++)
//	{
//		int j = 0;
//		for (j = 0; j < cols; j++)
//		{
//			board[i][j] = ch;
//		}
//	}
//}
//
//
//void DisplayBoard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//    //��ӡ�����
//	printf("******ɨ����Ϸ*****\n");
//	for (i = 0; i <= row; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ", i);
//		int j = 0;
//		for (j = 1; j <= col; j++)
//		{
//			
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//void SetMine(char mine[ROWS][COLS], int row, int col)
//{
//	int count = 0;
//	while (count < EASY_COUNT)
//	{
//		int i = rand() % row + 1;
//		int j = rand() % col + 1;
//		if (mine[i][j] == '0')
//		{
//			mine[i][j] = '1';
//			count++;
//		}
//	}
//}
//
//int GetMineCount(char mine[ROWS][COLS], int x, int y)
//{
//	return mine[x - 1][y] +
//		mine[x - 1][y - 1] +
//		mine[x][y - 1] +
//		mine[x + 1][y - 1] +
//		mine[x + 1][y] +
//		mine[x + 1][y + 1] +
//		mine[x][y + 1] +
//		mine[x - 1][y + 1] - 8 * '0';
//}
//
//
//void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* win)
//{
//	//չ��
//	//������Χû����
//	//���껹û�б����
//	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
//	{
//		int count = GetMineCount(mine, x, y);
//		if (show[x][y] == '*')
//		{
//			if (count == 0)
//			{
//				show[x][y] = ' ';
//				int i = 0;
//				for (i = x - 1; i <= x + 1; i++)
//				{
//					int j = 0;
//					for (j = y - 1; j <= y + 1; j++)
//					{
//						Expand(mine, show, i, j, win);
//					}
//				}
//			}
//			else
//			{
//				show[x][y] = count + '0';
//			}
//			(*win)++;
//		}
//	}
//}
//
//
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int win = 0;
//	int x = 0;
//	int y = 0;
//	while (win < row * col - EASY_COUNT)
//	{
//		printf("������Ҫ�Ų������:>");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (show[x][y] == '*')
//			{
//				if (mine[x][y] == '1')
//				{
//					printf("���ź����㱻ը����\n");
//					DisplayBoard(mine, ROW, COL);
//					break;
//				}
//				else
//				{
//					Expand(mine, show, x, y, &win);
//					DisplayBoard(show, ROW, COL);
//					/*int ret = GetMineCount(mine, x, y);
//					show[x][y] = ret + '0';
//					win++;*/
//				}
//			}
//			else
//			{
//				printf("�������ѱ��Ų��������������\n");
//			}
//		}
//		else
//		{
//			printf("����Ƿ�������������\n");
//		}
//	}
//	if (win == row * col - EASY_COUNT)
//		printf("��ϲ����ɨ�׳ɹ�\n");
//}
//
//
//
//void game()
//{
//	//��������
//	char mine[ROWS][COLS] = { 0 };
//	char show[ROWS][COLS] = { 0 };
//	//��ʼ��
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//	//��ӡ����
//	DisplayBoard(show, ROW, COL);
//	//������
//	SetMine(mine, ROW, COL);
//	//DisplayBoard(mine, ROW, COL);
//	//�Ų���
//	FindMine(mine, show, ROW, COL);
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("ɨ��\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}