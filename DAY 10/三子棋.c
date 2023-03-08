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
	//��������
	char arr[2*ROW+1][2*COL+1] = { 0 };

	// ��ʼ������
	Initboard(arr,row,col,' ');

	//��ӡ����
	Displayboard(arr, row, col);

	//���/��������
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
	//printf("%d ��ʤ����Ϸ������\n", set);
	Sleep(5000);
	system("cls");
	//�ж���Ӯ
	//judge(arr, row, col);


}

int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��: \n");
		scanf("%d", &input);
		switch (input)
		{
			case 1: 
				game();
				break;
			case 0:
				printf("�˳���Ϸ��\n");
				break;
			default:
				printf("����������������룺\n");
		}
	} while (input);

	return 0;
}