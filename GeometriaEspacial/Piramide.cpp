#include "Piramide.h"
#include <math.h>
#include <iostream>

using std::cout;
using std::endl;

double Piramide::AreaLateral()
{
	double m, g;
	double area = 0;
	double l = getAresta();
	double h = getAltura();

	switch (TipoBase) {
	case 3://tri�ngulo equil�tero
		m = l * sqrt(3) / 6.0;
		g = sqrt(pow(h, 2.0) + pow(m, 2.0));
		area = 3 * l * g / 2.0;
		break;
	case 4://quadrado
		m = l / 2.0;
		g = sqrt(pow(h, 2.0) + pow(m, 2.0));
		area = 4 * l * g / 2.0;
		break;
	case 6://hex�gono regular
		m = l * sqrt(3) / 2.0;
		g = sqrt(pow(h, 2.0) + pow(m, 2.0));
		area = 6 * l * g / 2.0;
		break;
	default:
		g = sqrt(pow(l, 2.0) + pow(h, 2.0));
		//System.out.println("g = " + g);
		area = acos(-1) * l * g;
	}
	return area;
}

double Piramide::AreaTotal()
{
	return AreaLateral() + AreaBase();
}

double Piramide::Volume()
{
	return AreaBase() * Altura / 3.0;
}

void Piramide::ListaDados()
{
	cout << "Pir�mide\n";
	cout << "Altura: " << getAltura() << endl;
	cout << "Aresta maior: " << getAresta() << endl;
	cout << "Lados da base: " << getTipoBase() << endl;
	cout << "�rea da base maior: " << AreaBase() << endl;
	cout << "�rea lateral: " << AreaLateral() << endl;
	cout << "�rea total: " << AreaTotal() << endl;
	cout << "Volume: " << Volume() << endl;
}
