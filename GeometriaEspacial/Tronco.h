#pragma once
#include "AbstractMedidas.h"
#include "Poliedro.h"
#include <math.h>

class Tronco :public Poliedro, AbstractMedidas
{
private:
	double ArestaMenor;

public:
	void setArestaMenor(double arestaMenor);
	double getArestaMenor();

	Tronco(int tipoBase, double altura, double aresta, double arestaMenor) :Poliedro(tipoBase, altura, aresta) {
		ArestaMenor = arestaMenor;
	}

	double AreaBaseMenor();
	double AreaLateral();
	double AreaTotal();
	double Volume();

	void ListaDados();
};

