#include <iostream>
using namespace std;


#define PALS 4
#define NUMEROS 13
#define NUM_CARTES PALS*NUMEROS

#define CORS 1
#define DIAMANTS 2
#define TREVOLS 3
#define PIQUES 4

#define ACE 1
#define JACK 11
#define QUEEN 12
#define KING 13


typedef struct
{
	int Pal;
	int Numero;
}Cartes;


void InicialitzarBaralla(Cartes[]);
void MostrarCarta(Cartes);
