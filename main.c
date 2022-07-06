#include "common.h"
void print_matrix(int d[ROW][COLUMN])
{
	int i, j;
	int x = 30, y = 5;//set position
	for (i = 0; i < ROW; i++)
	{
		gotoxy(x, y);
		for (j = 0; j < COLUMN; j++)
		{
			printf("%d ", d[i][j]);
		}
		y++;
	}
}
int main(void)
{
	int i, go_board[ROW][COLUMN] = { 0 };
	int x, y;
	for (i = 1; i <= MAX_TURN; i++)
	{
		gotoxy(0, i - 1);
		if ((i % 2))//black turn
		{
			printf("Black Turn(%d): ", i);
			scanf("%d %d", &x, &y);
			go_board[x][y] = BLACK;
			print_matrix(go_board);
		}
		else//white turn
		{
			printf("White Turn(%d): ", i);
			scanf("%d %d", &x, &y);
			go_board[x][y] = WHITE;
			print_matrix(go_board);
		}
	}
	

	return 0;
}