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
		 
		for (i = 0; i < 8; i++)                    //되돌아오기 위에서 아래로
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

		for (i = 0; i < 33; i++)					//왼쪽에서 오른쪽으로
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

		for (i = 0; i < 8; i++)								//아래쪽에서 위쪽으로
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

		for (i = 0; i < 33; i++)							//오른쪽에서 왼쪽으로
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