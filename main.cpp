#include "header.h"


int main()
{
	Cartes Baralla[NUM_CARTES];
	int i;

	srand((unsigned)time(NULL));

	InicialitzarBaralla(Baralla);
	
	Remenar(Baralla, INTERCANVIS);

	for (i = 0; i < NUM_CARTES; i++)
	{
		MostrarCarta(Baralla[i]);
	}

	return 0;
}