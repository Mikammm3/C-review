//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define ROW 3
//#define COL 3
//
//void menu()
//{
//	printf("***********************\n");
//	printf("****    1.play    *****\n");
//	printf("****    0.exit    *****\n");
//	printf("***********************\n");
//
//
//}
//
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//打印数据行   |
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			//打印分割
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//					printf("|");
//			}
//		}
//		printf("\n");
//	}
//}
//
//
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	while (1)
//	{
//		int i = 0;
//		int j = 0;
//		printf("请输入要下的坐标:>");
//		scanf("%d %d", &i, &j);
//		if (i >= 1 && i <= row && j >= 1 && j <= col)
//		{
//			if (board[i - 1][j - 1] == ' ')
//			{
//				board[i - 1][j - 1] = 'O';
//				break;
//			}
//			else
//			{
//				printf("该坐标被占用，请重新输入\n");
//			}
//		}
//		else
//		{
//			printf("坐标非法，请重新输入\n");
//		}
//	}
//}
//
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	while (1)
//	{
//		int i = rand() % ROW;
//		int j = rand() % COL;
//		if (board[i][j] == ' ')
//		{
//			board[i][j] = 'X';
//			break;
//		}
//	}
//}
//
//
//int IsFull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//				return 0;
//		}
//	}
//	return 1;
//}
//
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	//三横
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//			return board[i][0];
//	}
//	//列
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//			return board[0][i];
//	}
//	if (((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
//		(board[0][2] == board[1][1] && board[1][1] == board[2][0])) && board[1][1] != ' ')
//		return board[1][1];
//	if (IsFull(board, ROW, COL))
//	{
//		return 'Q';
//	}
//	else
//		return 'C';
//}
//
//
//void game()
//{
//	//创建
//	char board[ROW][COL] = { 0 };
//	//初始化
//	InitBoard(board, ROW, COL);
//	//打印棋盘
//	DisplayBoard(board, ROW, COL);
//	char ret = 0;
//	while (1)
//	{
//		//玩家下棋
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//判断输赢
//		ret=IsWin(board, ROW, COL);
//		if (ret != 'C')
//			break;
//		//电脑下棋
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//			break;
//	}
//	if (ret == 'O')
//		printf("玩家赢\n");
//	else if (ret == 'X')
//		printf("电脑赢\n");
//	else
//		printf("平局\n");
//}
//
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}


//int* printNumbers(int n, int* returnSize)
//{
//    *returnSize = pow(10, n) - 1;
//    int* arr = (int*)malloc(*returnSize * sizeof(int));
//    int i = 0;
//    for (i = 0; i < *returnSize; ++i)
//    {
//        *(arr + i) = i + 1;
//    }
//    return arr;
//}

//#include <stdio.h>
//
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int d = 0;
//    scanf("%4d %2d %2d", &y, &m, &d);
//    int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int sum = 0;
//    int i = 0;
//    for (i = 0; i < m - 1; i++)
//    {
//        if ((y % 4 == 0 && y % 100 != 0) || (y % 40 == 0))
//        {
//            arr[1] = 29;
//        }
//        sum += arr[i];
//    }
//    sum += d;
//    printf("%d\n", sum);
//    return 0;
//}


