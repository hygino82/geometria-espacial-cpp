#include "Poliedro.h"

	Poliedro::Poliedro(int tipoBase, double altura, double aresta) {
		TipoBase = tipoBase;
		Altura = altura;
		Aresta = aresta;
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