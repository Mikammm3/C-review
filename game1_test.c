#define _CRT_SECURE_NO_WARNINGS 1

#include"game1.h"

void game()
{
	//��������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//�������
		player_time(board);
		DisplayBoard(board, ROW, COL);
		ret = is_winer(board, ROW, COL);
		if (ret != 'C')
			break;
		//������
		comput_time(board);
		DisplayBoard(board, ROW, COL);
		ret = is_winer(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == 'O')
		printf("��ʤ����Ӧ�õ�\n");
	else if (ret == 'X')
		printf("�������ⶼ���䣿����\n");
	else if (ret == 'D')
		printf("���ǰɣ����ⶼ��ƽ�֣�����\n");

}




void menu()
{
	printf("*******************************\n");
	printf("******       1.play      ******\n");
	printf("******       0.exit      ******\n");
	printf("*******************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}