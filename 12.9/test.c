
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
	Initboard(mine, COLS, ROWS,'0');//��ʼ������
	Initboard(show, COLS, ROWS,'*');
	/*Print_board(mine, COL, ROW);*/
	Print_board(show, COL, ROW);//��ӡ����
	Set_mine(mine, COL, ROW);//�����ף�
	Print_board(mine, COL, ROW);

}
void test()
{
	srand(time(NULL));
	int intput;
	do
	{
		meun();
		printf("��ѡ��\n");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1: game();
			break;
		case 0:printf("�˳���Ϸ\n");
			break;
		default:printf("����������������룺\n");
			break;
		}
	} while (intput);
}
int main()
{
	test();
	return 0;
}