#pragma once
#include "AbstractMedidas.h"
#include "Poliedro.h"

class Prisma : public Poliedro, AbstractMedidas
{
public:
	Prisma(int tipoBase, double altura, double aresta) :Poliedro(tipoBase, altura, aresta) {
	}

	double AreaBase();
	double AreaLateral();
	double AreaTotal();
	double Volume();
};

