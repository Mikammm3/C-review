#define _CRT_SECURE_NO_WARNINGS 1

#include"game1.h"

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
		player_time(board);
		DisplayBoard(board, ROW, COL);
		ret = is_winer(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑走
		comput_time(board);
		DisplayBoard(board, ROW, COL);
		ret = is_winer(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == 'O')
		printf("你胜利是应该的\n");
	else if (ret == 'X')
		printf("啊？你这都能输？！！\n");
	else if (ret == 'D')
		printf("不是吧？你这都能平局？！！\n");

}




void menu()
{
	printf("*******************************\n");
	printf("******       1.play      ******\n");
	printf("******       0.exit      ******\n");
	printf("*******************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}