#include <stdio.h>

/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++) /* her setir üçün */
	{
		for (j = 0; j < 8; j++) /* her  sütun üçün */
		{
			putchar(a[i][j]); /* simvolu çap et */
		}
		putchar('\n'); /* setrin  sonu */
	}
}
