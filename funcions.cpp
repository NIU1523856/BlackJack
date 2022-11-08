#include "header.h"


void InicialitzarBaralla(Cartes b[])
{
	int j = 1, k = 1;
	for (size_t i = 0; i < NUM_CARTES; i++)
	{
		if (i % 13 == 0 && i != 0)
		{
			j = 1;
			k++;
		}

		b[i].Numero = j;
		b[i].Pal = k;
		j++;
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
		break;
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

void Intercanviar(Cartes& c1, Cartes& c2)
{
	Cartes aux;

	aux.Numero = c1.Numero;
	aux.Pal = c1.Pal;

	c1.Numero = c2.Numero;
	c1.Pal = c2.Pal;

	c2.Numero = aux.Numero;
	c2.Pal = aux.Pal;
}

void Remenar(Cartes b[], int intercanvis)
{
	int n1 = 0, n2 = 0;
	for (size_t i = 0; i < intercanvis; i++)
	{
		Intercanviar(b[Aleatori(1, NUM_CARTES)], b[Aleatori(1, NUM_CARTES)]);
	}
}

int Aleatori(int NumMin, int NumMax)
{
	int NumAleatori;

	NumAleatori = rand() % NumMax;

	return NumAleatori;
}

int PuntsCarta(Cartes c)
{
	switch (c.Numero)
	{
	case 11:
	case 12:
	case 13:
		return 10;
		break;
	default:
		return c.Numero;
		break;
	}
}

bool Preguntar()
{
	
	char des;
	do
	{
		cout << "Vols una altra carta? (S/N): ";
		cin >> des;
		if (des != 's' && des != 'S' && des != 'n' && des != 'N')
		{
			cout << "Error: Opcio incorrecte." << endl;
		}
	} while (des != 's' && des != 'S' && des != 'n' && des != 'N');
	
	if (des == 's' || des == 'S')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool EstrategiaOrdinador(bool jPlantat, int pOrdinador, int pJugador)
{
	if (jPlantat = 0 && pOrdinador < 17)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int CalcularGuanyador(bool jPerd, bool oPerd, int pJugador, int pOrdinador)
{
	if (jPerd)
	{
		if (oPerd)
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	else
	{
		if (oPerd)
		{
			return 1;
		}
		else
		{
			if (pJugador > pOrdinador)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
}