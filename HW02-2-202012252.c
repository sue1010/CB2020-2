#pragma warning(disable:4996)
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#define MAX_x 50
#define MAX_y 18

void gotoxy(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}

int main(void)
{
	int keyinput,i;
	int a = 80;
	int move_Posx = 30;
	int move_Posy = 15;

	gotoxy(move_Posx, move_Posy);
	printf(" @ \n");
	gotoxy(move_Posx, move_Posy+1);
	printf("|||\n");
	gotoxy(move_Posx, move_Posy+2);
	printf(" | \n");
	gotoxy(move_Posx, move_Posy+3);
	printf("| |\n");

	while (1) 
	{
		if (kbhit())
		{
			system("cls");
			keyinput = getch();
			switch (keyinput)
			{
				case 32:								// 스페이스바 눌렀을 때

					for (i = 0; i < 4; i++)
					{
						move_Posy -= 1;
						gotoxy(move_Posx, move_Posy);
						printf(" @ \n");

						gotoxy(move_Posx, move_Posy + 1);
						printf("-l-\n");

						gotoxy(move_Posx, move_Posy + 2);
						printf(" | \n");

						gotoxy(move_Posx, move_Posy + 3);
						printf("/ ㅡ\n");

						system("cls");
					}
					
					for (i = 0; i < 4; i++)
					{
						move_Posy += 1;
						gotoxy(move_Posx, move_Posy);
						printf(" @ \n");

						gotoxy(move_Posx, move_Posy + 1);
						printf("-l-\n");

						gotoxy(move_Posx, move_Posy + 2);
						printf(" | \n");

						gotoxy(move_Posx, move_Posy + 3);
						printf("/ ㅡ\n");

						system("cls");
					}
					
					gotoxy(move_Posx, move_Posy);
					printf(" @ \n");
					gotoxy(move_Posx, move_Posy + 1);
					printf("|||\n");
					gotoxy(move_Posx, move_Posy + 2);
					printf(" | \n");
					gotoxy(move_Posx, move_Posy + 3);
					printf("| |\n");

					break;

				case 75:									// 왼쪽 방향키 눌렀을 때
					if (move_Posx <= 0)
					{
						gotoxy(0, move_Posy);
						printf(" @ \n");

						gotoxy(0, move_Posy + 1);
						printf("/|\\\n");

						gotoxy(0, move_Posy + 2);
						printf(" | \n");

						gotoxy(0, move_Posy + 3);
						printf("/ \\\n");

						Sleep(a);

						gotoxy(0, move_Posy);
						printf(" @ \n");

						gotoxy(0, move_Posy + 1);
						printf("|||\n");

						gotoxy(0, move_Posy + 2);
						printf(" | \n");

						gotoxy(0, move_Posy + 3);
						printf("| |\n");
					}

					else
					{
						move_Posx -= 2;
						gotoxy(move_Posx, move_Posy);
						printf(" @ \n");

						gotoxy(move_Posx, move_Posy + 1);
						printf("/|\\\n");

						gotoxy(move_Posx, move_Posy + 2);
						printf(" | \n");

						gotoxy(move_Posx, move_Posy + 3);
						printf("/ \\\n");

						Sleep(a);

						gotoxy(move_Posx, move_Posy);
						printf(" @ \n");

						gotoxy(move_Posx, move_Posy + 1);
						printf("|||\n");

						gotoxy(move_Posx, move_Posy + 2);
						printf(" | \n");

						gotoxy(move_Posx, move_Posy + 3);
						printf("| |\n");

					}

					break;

				case 77:								//오른쪽 방향키 눌렀을 때
					if (move_Posx >= MAX_x)
					{
						gotoxy(MAX_x, move_Posy);
						printf(" @ \n");

						gotoxy(MAX_x, move_Posy + 1);
						printf("/|\\\n");

						gotoxy(MAX_x, move_Posy + 2);
						printf(" | \n");

						gotoxy(MAX_x, move_Posy + 3);
						printf("/ \\\n");

						Sleep(a);

						gotoxy(MAX_x, move_Posy);
						printf(" @ \n");

						gotoxy(MAX_x, move_Posy + 1);
						printf("|||\n");

						gotoxy(MAX_x, move_Posy + 2);
						printf(" | \n");

						gotoxy(MAX_x, move_Posy + 3);
						printf("| |\n");
					}
					else
					{
						move_Posx += 2;
						gotoxy(move_Posx, move_Posy);
						printf(" @ \n");

						gotoxy(move_Posx, move_Posy + 1);
						printf("/|\\\n");

						gotoxy(move_Posx, move_Posy + 2);
						printf(" | \n");

						gotoxy(move_Posx, move_Posy + 3);
						printf("/ \\\n");

						Sleep(a);

						gotoxy(move_Posx, move_Posy);
						printf(" @ \n");

						gotoxy(move_Posx, move_Posy + 1);
						printf("|||\n");

						gotoxy(move_Posx, move_Posy + 2);
						printf(" | \n");

						gotoxy(move_Posx, move_Posy + 3);
						printf("| |\n");
					}
					
					
					break;

				default:
					break;

			}
			
		}
	}
}