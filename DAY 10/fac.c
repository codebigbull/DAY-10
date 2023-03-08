#include "chess.h"

void Initboard(char get[2 * ROW + 1][2 * COL + 1], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			get[i][j] = set;
		}
	}
		
}

void Displayboard(char get[2 * ROW + 1][2 * COL + 1], int row, int col)
{
	int i = 0;
	int j = 0;
	system("cls");
	for (i = 2; i < row-1; i+=2)
	{
		for (j = 1; j < col; j+=2)
		{
			get[i][j] = '-';
		}
	}
	for (i = 1; i < row-1; i +=2)
	{
		for (j = 2; j < col-1; j += 2)
		{
			get[i][j] = '|';
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%c ", get[i][j]);
		}
		printf("\n");
	}
	Sleep(950);
}


void putmine(char get[2 * ROW + 1][2 * COL + 1], int row, int col, char set)
{
	int a = 1;
	int b = 1;
	flag:
	printf("请选择下棋的坐标： \n");
	scanf("%d%d", &a, &b);
	if (get[2 * a - 1][2 * b - 1] == ' ' && a > 0 && a < 4 && b>0 && b < 4)
	{
		get[2 * a - 1][2 * b - 1] = set;
	}
	else
	{
		printf("坐标非法，请重新输入：\n");
		goto flag;
	}

}

void putcomp(char get[2 * ROW + 1][2 * COL + 1], int row, int col, char set)
{
	int a = 0; 
	int b = 0;
flag:

	a = rand() % 3 + 1;
	b = rand() % 3 + 1;
	if (get[2 * a - 1][2 * b - 1] == ' ')
	{
		get[2 * a - 1][2 * b - 1] = set;
	}
	else
	{
		goto flag;
	}
}

int judge(char get[2 * ROW + 1][2 * COL + 1], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 6; i += 2)
	{
		if (get[i][1] == get[i][3] && get[i][1] == get[i][5] && get[i][1]!=' ')
		{
			printf("%c 获胜，游戏结束！", get[i][1]);
			return 0;
		}
		else if (get[1][i] == get[3][i] && get[1][i] == get[5][i] && get[1][i] != ' ')
		{
			printf("%c 获胜，游戏结束！", get[1][i]);
			return 0;
		}
	}
	if (get[1][1] == get[3][3] && get[1][1] == get[5][5] ||
		get[5][1] == get[3][3] && get[5][1] == get[1][5])
	{
		if (get[3][3] != ' ')
		{
			printf("%c 获胜，游戏结束！", get[3][3]);
			return 0;
		}
		else
			return 1;
	}
	else
		return 1;
}

