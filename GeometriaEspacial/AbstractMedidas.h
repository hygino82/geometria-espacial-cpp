#pragma once
#include "Poliedro.h"

class AbstractMedidas
{
public:
	
	virtual double AreaLateral() = 0;
	virtual double AreaTotal() = 0;
	virtual double Volume() = 0;
	virtual void ListaDados()=0;
};

