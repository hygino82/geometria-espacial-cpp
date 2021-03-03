#pragma once
#include "Poliedro.h"

class AbstractMedidas
{
public:
	double Area(int tipoBase, double aresta);//serve para ambas as bases
	virtual double AreaBase() = 0;
	virtual double AreaLateral() = 0;
	virtual double AreaTotal() = 0;
	virtual double Volume() = 0;
};

