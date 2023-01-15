#define _CRT_SECURE_NO_WARNINGS 1

#include "game2.h"

void menu()
{
	printf("**************************\n");
	printf("*****     1. play    *****\n");
	printf("*****     0. exit    *****\n");
	printf("**************************\n");

}

void game()
{
	//创建雷盘
	//布置雷的棋盘
	char mine[ROWS][COLS] = { 0 };
	//给玩家看的雷盘
	char show[ROWS][COLS] = { 0 };
	//初始化雷盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印雷盘
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);

}


int main()
{
	int input = 0;
	//设置随机数
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误,请重新选择\n");
			break;
		}

	} while (input);
	return 0;
}