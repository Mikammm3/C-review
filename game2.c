#define _CRT_SECURE_NO_WARNINGS 1

#include "game2.h"

//��ʼ������
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

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	//��ӡ�����
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		//��ӡ�����
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//������
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		//���������
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (mine[i][j] == '0')
		{
			mine[i][j] = '1';
			count--;
		}
	}
}


//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int win = 0;
	while (win < col * row - EASY_COUNT)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d %d", &i, &j);
		//���Ų鷶Χ�ڵ�����
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			//��һ���Ų������
			if (show[i][j] == '*')
			{
				int count = GetMineCount(mine, i, j);
				
				if (mine[i][j]=='0')
				{
					Expand(mine, show, i, j, &win);
					DisplayBoard(show, ROW, COL);
				}
				//�Ų鵽����
				else
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
			}
			//�Ѿ����Ų��������
			else
			{
				printf("�������Ѿ����Ų���ˣ�����������\n");
			}
		}
		//�����Ų鷶Χ�ڵ�����
		else
		{
			printf("�����겻���Ų鷶Χ�ڣ�����������\n");
		}
	}
	if (win == col * row - EASY_COUNT)
		printf("��ϲ�㣬ɨ�׳ɹ�\n");
}

//��ȡ������Χ�׵�����
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


//ʵ��չ��
//�����겻����
//������Χû����
//�������ǵ�һ���Ų�
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


