#include<stdio.h>
#include<Windows.h>

void gotoxy(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}

int main(void)
{
	int time = 100;
	int i;
	int Xpos = 0;
	int Ypos = 1;

	printf("Start!! Column Size: 33\n");

	while (1)
	{
		for (i = 0; i < 33; i++)
		{
			if (i == 0)
			{
				gotoxy(Xpos, Ypos);
				printf("*");
			}
			else
			{
				gotoxy(Xpos, Ypos);
				printf(" *");
				Xpos += 1;
				Sleep(time);
			}
		}

		for (i = 0; i < 8; i++)
		{
			if (i == 0)
			{
				gotoxy(Xpos, Ypos);
				printf("*");
			}
			else
			{
				gotoxy(Xpos, Ypos);
				printf(" \n");
				Ypos += 1;
				gotoxy(Xpos, Ypos);
				printf("*");
				Sleep(time);
			}

		}

		for (i = 0; i < 33; i++)
		{
			if (i == 0)
			{
				gotoxy(Xpos, Ypos);
				printf("*");
			}
			else
			{
				Xpos -= 1;
				gotoxy(Xpos, Ypos);
				printf("* ");
				Sleep(time);
			}

		}

		for (i = 0; i < 8; i++)
		{
			if (i == 0)
			{
				gotoxy(Xpos, Ypos);
				printf(" ");
			}
			else
			{
				Ypos -= 1;
				gotoxy(Xpos, Ypos);
				printf("*\n ");
				Sleep(time);
			}

		}
		 
		for (i = 0; i < 8; i++)                    //�ǵ��ƿ��� ������ �Ʒ���
		{
			if (i == 0)
			{
				gotoxy(Xpos, Ypos);
				printf("*");
			}
			else
			{
				gotoxy(Xpos, Ypos);
				printf(" \n");
				Ypos += 1;
				gotoxy(Xpos, Ypos);
				printf("*");
				Sleep(time);
			}

		}

		for (i = 0; i < 33; i++)					//���ʿ��� ����������
		{
			if (i == 0)
			{
				gotoxy(Xpos, Ypos);
				printf("*");
			}
			else
			{
				gotoxy(Xpos, Ypos);
				printf(" *");
				Xpos += 1;
				Sleep(time);
			}
		}

		for (i = 0; i < 8; i++)								//�Ʒ��ʿ��� ��������
		{
			if (i == 0)
			{
				gotoxy(Xpos, Ypos);
				printf(" ");
			}
			else
			{
				gotoxy(Xpos, Ypos);
				printf(" ");
				Ypos -= 1;
				gotoxy(Xpos, Ypos);
				printf("*");
				Sleep(time);
			}
		}

		for (i = 0; i < 33; i++)							//�����ʿ��� ��������
		{
			if (i == 0)
			{
				gotoxy(Xpos, Ypos);
				printf("*");
			}
			else
			{
				Xpos -= 1;
				gotoxy(Xpos, Ypos);
				printf("* ");
				Sleep(time);
			}

		}

	}

	return 0;
}