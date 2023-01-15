#define _CRT_SECURE_NO_WARNINGS 1

#include "game2.h"

//初始化雷盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ch;
		}
	}
}

//打印雷盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	//打印序号行
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		//打印序号列
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		//生成随机数
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (mine[i][j] == '0')
		{
			mine[i][j] = '1';
			count--;
		}
	}
}


//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int win = 0;
	while (win < col * row - EASY_COUNT)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d %d", &i, &j);
		//在排查范围内的坐标
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			//第一次排查的坐标
			if (show[i][j] == '*')
			{
				int count = GetMineCount(mine, i, j);
				
				if (mine[i][j]=='0')
				{
					Expand(mine, show, i, j, &win);
					DisplayBoard(show, ROW, COL);
				}
				//排查到雷了
				else
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
			}
			//已经被排查过的坐标
			else
			{
				printf("该坐标已经被排查过了，请重新输入\n");
			}
		}
		//不在排查范围内的坐标
		else
		{
			printf("该坐标不在排查范围内，请重新输入\n");
		}
	}
	if (win == col * row - EASY_COUNT)
		printf("恭喜你，扫雷成功\n");
}

//获取坐标周围雷的数量
int GetMineCount(char mine[ROWS][COLS], int i, int j)
{
	return mine[i - 1][j] +
		mine[i - 1][j - 1] +
		mine[i][j - 1] +
		mine[i + 1][j - 1] +
		mine[i + 1][j] +
		mine[i + 1][j + 1] +
		mine[i][j + 1] +
		mine[i - 1][j + 1] - 8 * '0';
}


//实现展开
//该坐标不是雷
//坐标周围没有雷
//该坐标是第一次排查
void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* win)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		int cnt = GetMineCount(mine, x, y);
		if (cnt > 0)
		{
			show[x][y] = cnt + '0';
		}
		else
		{
			show[x][y] = ' ';
			int i = 0;
			
			for (i = x - 1; i <= x + 1; i++)
			{
				int j = 0;
				for (j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '*')
						Expand(mine, show, i, j, win);
				}
			}
		}
		(*win)++;
	}
}


