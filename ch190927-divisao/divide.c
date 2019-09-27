#define	 _CRT_SECURE_NO_WARNINGS
#include	"memory.h"
#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

struct par
{
	int colunaA;
	int colunaB;
}
typedef struct par Par;

Par* contas = NULL;

int produto(const int x, const int y)
{
	int quociente = x;
	int b = y;
	par
	
	printf("Calculando produto de (%d,%d)\n", x, y);
	do
	{
		quociente = x / 2;
		y = y * 2;




	} while (quociente > 1);

}	// end produto()

int main()
{
	return 0;
}