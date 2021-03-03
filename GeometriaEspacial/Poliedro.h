#pragma once
class Poliedro
{
private:
	int TipoBase;
	double Altura;
	double Aresta;
public:
	Poliedro(int tipoBase, double altura, double aresta);

	int getTipoBase();
	void setTipoBase(int tipoBase);
	double getAltura();
	void setAltura(double altura);
	void setAresta(double aresta);
	double getAresta();
};

