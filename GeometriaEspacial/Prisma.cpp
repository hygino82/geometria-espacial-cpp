#include "Prisma.h"
#include <math.h>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

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

void Prisma::ListaDados()
{
	cout << "Prisma\n";
	cout << "Altura: " << getAltura() << endl;
	cout << "Aresta maior: " << getAresta() << endl;
	cout << "Lados da base: " <<getTipoBase() << endl;
	cout << "�rea da base maior: " << AreaBase() << endl;
	cout << "�rea lateral: " << AreaLateral() << endl;
	cout << "�rea total: " << AreaTotal() << endl;
	cout << "Volume: " << Volume() << endl;
}
