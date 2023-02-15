#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

//初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch);
//打印
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//获取坐标周围雷的数量
int GetMineCount(char mine[ROWS][COLS], int i, int j);
//实现展开
void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int i, int j, int* win);