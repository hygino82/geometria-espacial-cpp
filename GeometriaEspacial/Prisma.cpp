#include "Prisma.h"
#include <math.h>

double Prisma::AreaBase()
{
	return Area(TipoBase, Aresta);
}

double Prisma::AreaLateral()
{
	if (TipoBase == 1) {
		return 2 * acos(-1) * Aresta * Altura;
	}
	else {
		return TipoBase * Aresta * Altura;
	}
}

double Prisma::AreaTotal()
{
	return 2 * AreaBase() + AreaLateral();
}

double Prisma::Volume()
{
	return AreaBase() * Altura;
}
