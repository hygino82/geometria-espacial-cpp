#include "Poliedro.h"
#include<math.h>

	Poliedro::Poliedro(int tipoBase, double altura, double aresta) {
		TipoBase = tipoBase;
		Altura = altura;
		Aresta = aresta;
	}

	double Poliedro::Area(int tipoBase, double aresta)
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

	double Poliedro::AreaBase()
	{
		return Area(TipoBase, Aresta);
	}
	
	int Poliedro::getTipoBase() {
		return TipoBase;
	}
	void Poliedro::setTipoBase(int tipoBase) {
		TipoBase = tipoBase;
	}
	double Poliedro::getAltura() {
		return Altura;
	}
	void Poliedro::setAltura(double altura) {
		Altura = altura;
	}
	void Poliedro::setAresta(double aresta) {
		Aresta = aresta;
	}
	double Poliedro::getAresta() {
		return Aresta;
	}