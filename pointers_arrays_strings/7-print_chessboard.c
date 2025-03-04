#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 *@a: 2D array representing the chessboard, where each element is a character
 *(each character represents a piece or an empty space on the chessboard)
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
