#include "chess.h"

void menu()
{
	printf("**********************\n");
	printf("*******1.  play ******\n");
	printf("*******0.  exit ******\n");
	printf("**********************\n");
}

void game()
{
	int row = 2 * ROW + 1;
	int col = 2 * ROW + 1;
	//插入棋盘
	char arr[2*ROW+1][2*COL+1] = { 0 };

	// 初始化棋盘
	Initboard(arr,row,col,' ');

	//打印棋盘
	Displayboard(arr, row, col);

	//玩家/电脑下棋
	while (judge(arr, row, col))
	{
		putmine(arr, row, col, '*');
		Displayboard(arr, row, col);
		if (!judge(arr, row, col))
			break;
		putcomp(arr, row, col, '#');
		Displayboard(arr, row, col);
	}
	//int set = judge(arr, row, col);
	//printf("%d 获胜！游戏结束。\n", set);
	Sleep(5000);
	system("cls");
	//判断输赢
	//judge(arr, row, col);


}

int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择: \n");
		scanf("%d", &input);
		switch (input)
		{
			case 1: 
				game();
				break;
			case 0:
				printf("退出游戏。\n");
				break;
			default:
				printf("输入错误，请重新输入：\n");
		}
	} while (input);

	return 0;
}