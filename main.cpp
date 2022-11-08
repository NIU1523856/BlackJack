#include "header.h"


int main()
{
	srand((unsigned)time(NULL));

	Cartes Baralla[NUM_CARTES];
	int i;

	InicialitzarBaralla(Baralla);
	/*Intercanviar(Baralla[23], Baralla[43]);
	MostrarCarta(Baralla[23]);
	MostrarCarta(Baralla[43]);*/
	
	Remenar(Baralla, INTERCANVIS);

	for (i = 0; i < NUM_CARTES; i++)
	{
		MostrarCarta(Baralla[i]);
	}

	return 0;
}