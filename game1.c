#define _CRT_SECURE_NO_WARNINGS 1

#include"game1.h"



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
		int j = 0;
		//打印   |
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割线
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

void player_time(char board[ROW][COL])
{
	int i = 1;
	int j = 1;
	while (1)
	{
		printf("玩家走\n");
		printf("请输入要走的坐标:>");
		scanf("%d %d", &i, &j);
		if (board[i - 1][j - 1] == ' ')
		{
			board[i - 1][j - 1] = 'O';
			break;
		}
		else
			printf("该坐标被占用，请重新输入\n");
	}
}


void comput_time(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	while (1)
	{
		i = rand() % 3;
		j = rand() % 3;
		if (board[i][j] == ' ')
			break;
	}
	board[i][j] = 'X';
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}



//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   

//玩家赢  O
//电脑赢  X
//平局    D
//继续下  C

char is_winer(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//横三行
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (i = 0; i < col; i++)
	{
		//竖三列
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	//二斜线
	if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') ||
		((board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')))
		return board[1][1];
	int ret = IsFull(board, ROW, COL);
	if (ret == 0)
		return 'C';
	else
		return 'D';

}