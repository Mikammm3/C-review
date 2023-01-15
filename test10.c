#define _CRT_SECURE_NO_WARNINGS 1

//三子棋

#include<stdio.h>
#include<string.h>

#define ROW 3
#define COL 3

void menu()
{
	printf("*****************************\n");
	printf("*****     1.play       ******\n");
	printf("*****     0.exit       ******\n");
	printf("*****************************\n");

}

void InitBoard(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', ROW * COL * sizeof(board[0][0]));
}

//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据行
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}

}

void PlayMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入玩家要下的坐标:>\n");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = 'O';
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("非法坐标，请重新输入\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = 'X';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//横三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	//竖三列
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	//对角线
	if (((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
		(board[0][2] == board[1][1] && board[1][1] == board[2][0])) && board[1][1] != ' ')
		return board[1][1];
	if (IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	else
		return 'C';
}

void game()
{
	//创建棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//玩家下棋
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == 'O')
		printf("恭喜您，游戏胜利\n");
	else if (ret == 'X')
		printf("很遗憾，游戏失败\n");
	else if (ret == 'Q')
		printf("平局\n");
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}

	} while (input);
	return 0;
}


