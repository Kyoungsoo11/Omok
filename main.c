#include "common.h"
//to do:
//menu
//	instruction, start, introduce me
//renju rule
//interface
//

void print_matrix(int d[ROW][COLUMN])//to do: print map
{
	int i, j;
	int x = 30, y = 5;//set position
	for (i = 0; i < COLUMN; i++)
	{
		gotoxy(x, y);
		for (j = 0; j < ROW; j++)
		{
			printf("%d ", d[j][i]);
		}
		y++;
	}
}
int deter_w(int d[ROW][COLUMN], int x, int y, int t)// t: turn, Based on the last stone
{
	int i, result = 0;
	switch (t)
	{
	case 1://black turn
		// horizontality
		if (d[x - 2][y] == BLACK && d[x - 1][y] == BLACK && d[x][y] == BLACK && d[x - 4][y] == BLACK && d[x - 3][y] == BLACK)
			result = BLACK;
		else if (d[x - 2][y] == BLACK && d[x - 1][y] == BLACK && d[x][y] == BLACK && d[x + 1][y] == BLACK && d[x - 3][y] == BLACK)
			result = BLACK;
		else if (d[x - 2][y] == BLACK && d[x - 1][y] == BLACK && d[x][y] == BLACK && d[x + 1][y] == BLACK && d[x + 2][y] == BLACK)
			result = BLACK;
		else if (d[x + 3][y] == BLACK && d[x - 1][y] == BLACK && d[x][y] == BLACK && d[x + 1][y] == BLACK && d[x + 2][y] == BLACK)
			result = BLACK;
		else if (d[x + 3][y] == BLACK && d[x + 4][y] == BLACK && d[x][y] == BLACK && d[x + 1][y] == BLACK && d[x + 2][y] == BLACK)
			result = BLACK;
		// perpendicular
		else if (d[x][y - 2] == BLACK && d[x][y - 1] == BLACK && d[x][y] == BLACK && d[x][y - 4] == BLACK && d[x][y - 3] == BLACK)
			result = BLACK;
		else if (d[x][y - 2] == BLACK && d[x][y - 1] == BLACK && d[x][y] == BLACK && d[x][y + 1] == BLACK && d[x][y - 3] == BLACK)
			result = BLACK;
		else if (d[x][y - 2] == BLACK && d[x][y - 1] == BLACK && d[x][y] == BLACK && d[x][y + 1] == BLACK && d[x][y + 2] == BLACK)
			result = BLACK;
		else if (d[x][y + 3] == BLACK && d[x][y - 1] == BLACK && d[x][y] == BLACK && d[x][y + 1] == BLACK && d[x][y + 2] == BLACK)
			result = BLACK;
		else if (d[x][y + 3] == BLACK && d[x][y + 4] == BLACK && d[x][y] == BLACK && d[x][y + 1] == BLACK && d[x][y + 2] == BLACK)
			result = BLACK;
		// diagonal(left up, right down)
		else if (d[x + 2][y - 2] == BLACK && d[x + 1][y - 1] == BLACK && d[x][y] == BLACK && d[x + 4][y - 4] == BLACK && d[x + 3][y - 3] == BLACK)
			result = BLACK;
		else if (d[x + 2][y - 2] == BLACK && d[x + 1][y - 1] == BLACK && d[x][y] == BLACK && d[x - 1][y + 1] == BLACK && d[x + 3][y - 3] == BLACK)
			result = BLACK;
		else if (d[x + 2][y - 2] == BLACK && d[x + 1][y - 1] == BLACK && d[x][y] == BLACK && d[x - 1][y + 1] == BLACK && d[x - 2][y + 2] == BLACK)
			result = BLACK;
		else if (d[x - 3][y + 3] == BLACK && d[x + 1][y - 1] == BLACK && d[x][y] == BLACK && d[x - 1][y + 1] == BLACK && d[x - 2][y + 2] == BLACK)
			result = BLACK;
		else if (d[x - 3][y + 3] == BLACK && d[x - 4][y + 4] == BLACK && d[x][y] == BLACK && d[x - 1][y + 1] == BLACK && d[x - 2][y + 2] == BLACK)
			result = BLACK;
		// diagonal(left down, right up)
		else if (d[x - 2][y - 2] == BLACK && d[x - 1][y - 1] == BLACK && d[x][y] == BLACK && d[x - 4][y - 4] == BLACK && d[x - 3][y - 3] == BLACK)
			result = BLACK;
		else if (d[x - 2][y - 2] == BLACK && d[x - 1][y - 1] == BLACK && d[x][y] == BLACK && d[x + 1][y + 1] == BLACK && d[x - 3][y - 3] == BLACK)
			result = BLACK;
		else if (d[x - 2][y - 2] == BLACK && d[x - 1][y - 1] == BLACK && d[x][y] == BLACK && d[x + 1][y + 1] == BLACK && d[x + 2][y + 2] == BLACK)
			result = BLACK;
		else if (d[x + 3][y + 3] == BLACK && d[x - 1][y - 1] == BLACK && d[x][y] == BLACK && d[x + 1][y + 1] == BLACK && d[x + 2][y + 2] == BLACK)
			result = BLACK;
		else if (d[x + 3][y + 3] == BLACK && d[x + 4][y + 4] == BLACK && d[x][y] == BLACK && d[x + 1][y + 1] == BLACK && d[x + 2][y + 2] == BLACK)
			result = BLACK;
		break;
	case 0://white turn
		if (d[x - 2][y] == WHITE && d[x - 1][y] == WHITE && d[x][y] == WHITE && d[x - 4][y] == WHITE && d[x - 3][y] == WHITE)
			result = WHITE;
		else if (d[x - 2][y] == WHITE && d[x - 1][y] == WHITE && d[x][y] == WHITE && d[x + 1][y] == WHITE && d[x - 3][y] == WHITE)
			result = WHITE;
		else if (d[x - 2][y] == WHITE && d[x - 1][y] == WHITE && d[x][y] == WHITE && d[x + 1][y] == WHITE && d[x + 2][y] == WHITE)
			result = WHITE;
		else if (d[x + 3][y] == WHITE && d[x - 1][y] == WHITE && d[x][y] == WHITE && d[x + 1][y] == WHITE && d[x + 2][y] == WHITE)
			result = WHITE;
		else if (d[x + 3][y] == WHITE && d[x + 4][y] == WHITE && d[x][y] == WHITE && d[x + 1][y] == WHITE && d[x + 2][y] == WHITE)
			result = WHITE;
		// perpendicular
		else if (d[x][y - 2] == WHITE && d[x][y - 1] == WHITE && d[x][y] == WHITE && d[x][y - 4] == WHITE && d[x][y - 3] == WHITE)
			result = WHITE;
		else if (d[x][y - 2] == WHITE && d[x][y - 1] == WHITE && d[x][y] == WHITE && d[x][y + 1] == WHITE && d[x][y - 3] == WHITE)
			result = WHITE;
		else if (d[x][y - 2] == WHITE && d[x][y - 1] == WHITE && d[x][y] == WHITE && d[x][y + 1] == WHITE && d[x][y + 2] == WHITE)
			result = WHITE;
		else if (d[x][y + 3] == WHITE && d[x][y - 1] == WHITE && d[x][y] == WHITE && d[x][y + 1] == WHITE && d[x][y + 2] == WHITE)
			result = WHITE;
		else if (d[x][y + 3] == WHITE && d[x][y + 4] == WHITE && d[x][y] == WHITE && d[x][y + 1] == WHITE && d[x][y + 2] == WHITE)
			result = WHITE;
		// diagonal(left up, right down)
		else if (d[x + 2][y - 2] == WHITE && d[x + 1][y - 1] == WHITE && d[x][y] == WHITE && d[x + 4][y - 4] == WHITE && d[x + 3][y - 3] == WHITE)
			result = WHITE;
		else if (d[x + 2][y - 2] == WHITE && d[x + 1][y - 1] == WHITE && d[x][y] == WHITE && d[x - 1][y + 1] == WHITE && d[x + 3][y - 3] == WHITE)
			result = WHITE;
		else if (d[x + 2][y - 2] == WHITE && d[x + 1][y - 1] == WHITE && d[x][y] == WHITE && d[x - 1][y + 1] == WHITE && d[x - 2][y + 2] == WHITE)
			result = WHITE;
		else if (d[x - 3][y + 3] == WHITE && d[x + 1][y - 1] == WHITE && d[x][y] == WHITE && d[x - 1][y + 1] == WHITE && d[x - 2][y + 2] == WHITE)
			result = WHITE;
		else if (d[x - 3][y + 3] == WHITE && d[x - 4][y + 4] == WHITE && d[x][y] == WHITE && d[x - 1][y + 1] == WHITE && d[x - 2][y + 2] == WHITE)
			result = WHITE;
		// diagonal(left down, right up)
		else if (d[x - 2][y - 2] == WHITE && d[x - 1][y - 1] == WHITE && d[x][y] == WHITE && d[x - 4][y - 4] == WHITE && d[x - 3][y - 3] == WHITE)
			result = WHITE;
		else if (d[x - 2][y - 2] == WHITE && d[x - 1][y - 1] == WHITE && d[x][y] == WHITE && d[x + 1][y + 1] == WHITE && d[x - 3][y - 3] == WHITE)
			result = WHITE;
		else if (d[x - 2][y - 2] == WHITE && d[x - 1][y - 1] == WHITE && d[x][y] == WHITE && d[x + 1][y + 1] == WHITE && d[x + 2][y + 2] == WHITE)
			result = WHITE;
		else if (d[x + 3][y + 3] == WHITE && d[x - 1][y - 1] == WHITE && d[x][y] == WHITE && d[x + 1][y + 1] == WHITE && d[x + 2][y + 2] == WHITE)
			result = WHITE;
		else if (d[x + 3][y + 3] == WHITE && d[x + 4][y + 4] == WHITE && d[x][y] == WHITE && d[x + 1][y + 1] == WHITE && d[x + 2][y + 2] == WHITE)
			result = WHITE;
		break;
	}

	return result;
}
int main(void)
{
	int i, turn, result, go_board[ROW][COLUMN] = { 0 };
	int x, y;
	for (i = 1; i <= MAX_TURN; i++)
	{
		turn = i % 2;
		gotoxy(0, i - 1);
		switch (turn)
		{
		case 1://black turn
			printf("Black Turn(%d): ", i);
			scanf("%d %d", &x, &y);
			go_board[x][y] = BLACK;
			print_matrix(go_board);
			break;
		case 0://white turn
			printf("White Turn(%d): ", i);
			scanf("%d %d", &x, &y);
			go_board[x][y] = WHITE;
			print_matrix(go_board);
			break;
		}
		result = deter_w(go_board, x, y, turn);
		if (result)
		{
			switch (result)
			{
			case BLACK:
				printf("BLACK WIN!!");
				break;
			case WHITE:
				printf("WHITE WIN!!");
				break;
			}
			break;
		}

	}
	

	return 0;
}