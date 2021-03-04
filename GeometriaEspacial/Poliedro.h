#pragma once

class Poliedro
{
protected:
	int TipoBase;
	double Altura;
	double Aresta;
public:
	Poliedro(int tipoBase, double altura, double aresta);
	
	double Area(int tipoBase, double aresta);

	double AreaBase();

	int getTipoBase();
	void setTipoBase(int tipoBase);
	double getAltura();
	void setAltura(double altura);
	void setAresta(double aresta);
	double getAresta();
};

