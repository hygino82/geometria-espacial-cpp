#include "Piramide.h"
#include <math.h>

double Piramide::AreaBase()
{
	return Area(TipoBase, Aresta);
}

double Piramide::AreaLateral()
{
	double m, g;
	double area = 0;
	double l = getAresta();
	double h = getAltura();

	switch (TipoBase) {
	case 3://triângulo equilátero
		m = l * sqrt(3) / 6.0;
		g = sqrt(pow(h, 2.0) + pow(m, 2.0));
		area = 3 * l * g / 2.0;
		break;
	case 4://quadrado
		m = l / 2.0;
		g = sqrt(pow(h, 2.0) + pow(m, 2.0));
		area = 4 * l * g / 2.0;
		break;
	case 6://hexágono regular
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
