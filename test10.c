#define _CRT_SECURE_NO_WARNINGS 1

//������

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
		//��ӡ������
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
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
	printf("�����:>\n");
	while (1)
	{
		printf("���������Ҫ�µ�����:>\n");
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
				printf("�����걻ռ�ã�����������\n");
			}
		}
		else
		{
			printf("�Ƿ����꣬����������\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
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
	//������
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	//������
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	//�Խ���
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
	//��������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//�������
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == 'O')
		printf("��ϲ������Ϸʤ��\n");
	else if (ret == 'X')
		printf("���ź�����Ϸʧ��\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}

	} while (input);
	return 0;
}


