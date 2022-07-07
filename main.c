#include "common.h"
//todo list:
// menu
// // instruction, start, introduce me
// renju rule
// // 3X3, 4X4
// // to write on go_board
// setting stones(input position)
void renju(int d[ROW][COLUMN])//RENJU: -1
{
	int i, j;

	for (i = 0; i < COLUMN; i++)//X axis
	{
		for (j = 0; j < ROW; j++)//Y axis (j,i)
		{

		}
	}
}
void print_board(int d[ROW][COLUMN], int t)//t: turn, (·)○●Ⅹ
{
	int i, j;
	int x = 30, y = 5;//set position
	for (i = 0; i < COLUMN; i++)
	{
		gotoxy(x, y);
		for (j = 0; j < ROW; j++)
		{
			switch (t)
			{
			case 1://after black turn
				switch (d[j][i])
				{
				case 0:
				case RENJU:
					Color(6, 0);
					printf("·");
					break;
				case BLACK:
					Color(6, 0);
					printf("●");
					break;
				case WHITE:
					Color(6, 15);
					printf("●");
					break;
				}
				break;
			case 0://after white turn (= black turn)
				switch (d[j][i])
				{
				case 0:
					Color(6, 0);
					printf("·");
					break;
				case BLACK:
					Color(6, 0);
					printf("●");
					break;
				case WHITE:
					Color(6, 15);
					printf("●");
					break;
				case RENJU:
					Color(6, 12);
					printf("Ⅹ");
					break;
				}
				break;
			}
		}
		y++;
	}
	Color(0, 15);
}
int deter_w(int d[ROW][COLUMN], int x, int y, int t)// t: turn, Based on the last stone
{
	int result = 0;
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
	int i, turn, result, wrong = 0, go_board[ROW][COLUMN] = { 0 };
	int x, y;
	for (i = 1; i <= MAX_TURN; i++)
	{
		turn = i % 2;
	stone:
		gotoxy(0, i+ 2*wrong - 1);//printing turn
		switch (turn)
		{
		case 1://black turn
			printf("Black Turn(%d): ", i);
			scanf("%d %d", &x, &y);
			if (!(go_board[x][y]))
			{
				go_board[x][y] = BLACK;
				print_board(go_board, turn);
			}
			else
			{
				printf("Wrong position!\n");
				wrong++;
				goto stone;
			}
			break;
		case 0://white turn
			printf("White Turn(%d): ", i);
			scanf("%d %d", &x, &y);
			if (go_board[x][y] != BLACK && go_board[x][y] != WHITE)
			{
				go_board[x][y] = WHITE;
				print_board(go_board, turn);
			}
			else
			{
				printf("Wrong position!\n");
				wrong++;
				goto stone;
			}
			break;
		}
		result = deter_w(go_board, x, y, turn);
		if (result)//(result != 0)
		{
			gotoxy(0, i + 2 * wrong);//print winner
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
