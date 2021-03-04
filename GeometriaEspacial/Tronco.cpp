#include "Tronco.h"
#include <math.h>
#include <iostream>

void Tronco::setArestaMenor(double arestaMenor)
{
	ArestaMenor = arestaMenor;
}

double Tronco::getArestaMenor()
{
	return ArestaMenor;
}

double Tronco::AreaBaseMenor()
{
	return Area(TipoBase, ArestaMenor);
}

double Tronco::AreaLateral()
{
	double l1 = Aresta;
	double l2 = ArestaMenor;
	double h = Altura;
	int n = 1;// inicializar
	double m1 = 0, m2 = 0;//inicializando
	double g;
	double area = 0;// inicializar

	switch (TipoBase)
	{
	case 3:
		m1 = l1 * sqrt(3) / 6.0;
		m2 = l2 * sqrt(3) / 6.0;
		n = 3;
		break;
	case 4:
		m1 = l1 / 2.0;
		m2 = l2 / 2.0;
		n = 4;// 4 lados
		break;
	case 6:
		m1 = l1 * sqrt(3) / 2.0;
		m2 = l2 * sqrt(3) / 2.0;
		n = 6;
		break;
	default:
		double dif = (l1 > l2) ? (l1 - l2) : (l2 - l1);
		g = sqrt(pow(dif, 2.0) + pow(h, 2.0));
		area = acos(-1) * g * (l1 + l2);//pi=acos(-1)
		break;
	}
	if (TipoBase == 4 || TipoBase == 6 || TipoBase == 3) {

		double dif = (m2 > m1) ? (m2 - m1) : (m1 - m2);
		g = sqrt(pow(dif, 2.0) + pow(h, 2.0));

		area = n * (l1 + l2) * g / 2.0;
	}
	return area;
}

double Tronco::AreaTotal()
{
	return AreaBase() + AreaBaseMenor() + AreaLateral();
}

double Tronco::Volume()
{
	return Altura * (AreaBase() + AreaBaseMenor() + sqrt(AreaBase() * AreaBaseMenor())) / 3.0;
}

void Tronco::ListaDados()
{
	std::cout << "Tronco\n";
	std::cout << "Altura: " << getAltura() << std::endl;
	std::cout << "Aresta maior: " << getAresta() << std::endl;
	std::cout << "Aresta menor: " << getArestaMenor() << std::endl;
	std::cout << "Lados da base: " << getTipoBase() << std::endl;
	std::cout << "햞ea da base maior: " << AreaBase() << std::endl;
	std::cout << "햞ea da base menor: " << AreaBaseMenor() << std::endl;
	std::cout << "햞ea lateral: " << AreaLateral() << std::endl;
	std::cout << "햞ea total: " << AreaTotal() << std::endl;
	std::cout << "Volume: " << Volume() << std::endl;
}
