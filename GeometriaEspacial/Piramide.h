#pragma once
#include "AbstractMedidas.h"
#include "Poliedro.h"

class Piramide : public Poliedro, AbstractMedidas
{
public:
	Piramide(int tipoBase, double altura, double aresta) :Poliedro(tipoBase, altura, aresta) {
	}

	double AreaBase();
	double AreaLateral();
	double AreaTotal();
	double Volume();
};

