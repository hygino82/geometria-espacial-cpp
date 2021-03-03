#include "AbstractMedidas.h"
#include <math.h>
#include "Poliedro.h"

double AbstractMedidas::Area(int tipoBase, double aresta)
{
	double area = 0;
	switch (tipoBase) {
	case 3:
		area = pow(aresta, 2) * sqrt(3) / 4.0;
		break;
	case 4:
		area = aresta * aresta;
		break;
	case 6:
		area = 3 * pow(aresta, 2) * sqrt(3) / 2.0;
		break;
	default:
		area = aresta * aresta * acos(-1);//pi=acos(-1)
	}
	return area;
}
