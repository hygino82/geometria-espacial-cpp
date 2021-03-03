#include <iostream>
#include "Prisma.h"
#include "Piramide.h"
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "");

	/*Prisma p1(4, 10, 20);
	cout << "Prisma\n";
	cout << "Altura: " << p1.getAltura() << endl;
	cout << "Aresta: " << p1.getAresta() << endl;
	cout << "Base: " << p1.getTipoBase() << endl;
	cout << "Área da base: " << p1.AreaBase() << endl;
	cout << "Área lateral: " << p1.AreaLateral() << endl;
	cout << "Área total: " << p1.AreaTotal() << endl;
	cout << "Volume: " << p1.Volume() << endl;
	cout << "\n----------------------------------\n";*/

	Piramide p2(6, 18, 15);
	cout << "Pirâmide\n";
	cout << "Altura: " << p2.getAltura() << endl;
	cout << "Aresta: " << p2.getAresta() << endl;
	cout << "Lados da base: " << p2.getTipoBase() << endl;
	cout << "Área da base: " << p2.AreaBase() << endl;
	cout << "Área lateral: " << p2.AreaLateral() << endl;
	cout << "Área total: " << p2.AreaTotal() << endl;
	cout << "Volume: " << p2.Volume() << endl;
	system("pause>0");
}
