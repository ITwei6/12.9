#define  _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define EASYCOUNT 10
#define  COL 9
#define ROW 9
#define COLS COL+2
#define ROWS ROW+2
char Initboard(char board[COLS][ROWS], int cols, int rows,char set);//��ʼ������
void Print_board(char board[COLS][ROWS], int col, int row);//��ӡ����
void Set_mine(char mine[COLS][ROWS], int col, int row);//������