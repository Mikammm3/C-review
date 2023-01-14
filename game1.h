#pragma once

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3


void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void player_time(char board[ROW][COL]);
void comput_time(char board[ROW][COL]);
int IsFull(char board[ROW][COL], int row, int col);
char is_winer(char board[ROW][COL], int row, int col);