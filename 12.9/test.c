
#include "game.h"
void meun()
{
	printf("*****************************\n");
	printf("*******    1.play    ********\n");
	printf("*******    0.exit    ********\n");
	printf("*****************************\n");
}
void game()
{
	char mine[COLS][ROWS] = { 0 };
	char show[COLS][ROWS] = { 0 };
	Initboard(mine, COLS, ROWS,'0');//初始化棋盘
	Initboard(show, COLS, ROWS,'*');
	/*Print_board(mine, COL, ROW);*/
	Print_board(show, COL, ROW);//打印棋盘
	Set_mine(mine, COL, ROW);//布置雷；
	Print_board(mine, COL, ROW);

}
void test()
{
	srand(time(NULL));
	int intput;
	do
	{
		meun();
		printf("请选择：\n");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1: game();
			break;
		case 0:printf("退出游戏\n");
			break;
		default:printf("输入错误请重新输入：\n");
			break;
		}
	} while (intput);
}
int main()
{
	test();
	return 0;
}