#define	 _CRT_SECURE_NO_WARNINGS
#include	"memory.h"
#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>


int prod(const int, const int);		// sem as mensagens
int produto(const int, const int);	
int testa_produto(int, int);


int main()
{
	testa_produto(9, 6);
	testa_produto(6, 9);
	testa_produto(10, 1000);
	testa_produto(90987, 656);
	return 0;
}

int prod(const int x, const int y)
{
	int		linha[32][2];
	int		quociente = x;
	int		b = y;
	int		passo = 1;
	int		valor = 0;

	linha[0][0] = x;
	linha[0][1] = y;
	if ((x % 2) == 1) valor = valor + y;
	do
	{
		quociente = quociente / 2;
		b = b * 2;
		linha[passo][0] = quociente;
		linha[passo][1] = b;
		if ((quociente % 2) == 1) valor = valor + b;
		passo = passo + 1;
	} while (quociente > 1);
	return valor;
}	// end produto()


int produto(const int x, const int y)
{
	int		linha[32][2];
	int		quociente = x;
	int		b = y;
	int		passo = 1;
	int		valor = 0;

	printf("\nCalculando produto de (%d,%d)\n", x, y);
	linha[0][0] = x;
	linha[0][1] = y;
	if ((x % 2) == 1) valor = valor + y;
	do
	{
		quociente = quociente / 2;
		b = b * 2;
		linha[passo][0] = quociente;
		linha[passo][1] = b;
		if ((quociente % 2) == 1) valor = valor + b;
		passo = passo + 1;
	} while (quociente > 1);

	printf("saida depois de %d passos. Eis a tabela:\n", passo);
	for (int i = 0; i < passo; ++i)
	{
		if (linha[i][0] % 2 == 1)
		{
			printf("%02d    %10d <==    %10d *\n", i, linha[i][0], linha[i][1]);
		}
		else
		{
			printf("%02d    %10d        %10d\n", i, linha[i][0], linha[i][1]);
		}
	}	// end for
	return valor;
}	// end produto()


int testa_produto(int a, int b)
{
	int p = prod(a, b);
	int r = a * b;
	if (p == r)
	{
		printf("produto(%d,%d) retornou %d  (ok)\n", a, b, p);
	}
	else
	{
		printf("produto(%d,%d) retornou %d  (ERRO)\n", a, b, p);
	}
	return (p == a * b);
}	// end testa_produto()
