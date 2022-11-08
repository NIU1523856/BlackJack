#include "header.h"


void InicialitzarBaralla(Cartes b[])
{
	for (size_t i = 0; i < PALS; i++)
	{
		for (size_t j = 0; j < NUMEROS; j++)
		{
			b[i].Pal = i;
			b[i].Numero = j;
		}
	}
}

void MostrarCarta(Cartes c)
{
	switch (c.Numero)
	{
	case 1:
		cout << "A";
		break;
	case 11:
		cout << "J";
	case 12:
		cout << "Q";
		break;
	case 13:
		cout << "K";
		break;
	default:
		cout << c.Numero;
		break;
	}
	switch (c.Pal)
	{
	case 1:
		cout << "C";
		break;
	case 2:
		cout << "D";
		break;
	case 3:
		cout << "T";
		break;
	case 4:
		cout << "P";
		break;
	}
	cout << endl;
}