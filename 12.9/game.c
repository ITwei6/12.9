#include "game.h"

void Initboard(char board[COLS][ROWS], int cols, int rows,char set)
{
	int i;
	for (i = 0;i < cols;i++)
	{
		int j;
		for (j = 0;j < rows;j++)
		{
			board[i][j] = set;
		}
	}
}
void Print_board(char board[COLS][ROWS], int col, int row)
{
	printf("----------ɨ��------------\n");
	int i;
	int j;
	for (j = 0;j <=row;j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1;i <= col;i++)
	{
		printf("%d ", i);
		for (j = 1;j <= row;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------ɨ��------------\n");
	
}
void Set_mine(char mine[COLS][ROWS], int col, int row)
{
	//�����ף�����Ҫ��������±��������ף�
	int count = EASYCOUNT;
	
	while (count)
	{
		int x = rand() % col + 1;
		int y = rand() % row + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}