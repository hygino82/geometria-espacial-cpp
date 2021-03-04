#include <iostream>
#include <locale>
#include "Prisma.h"
#include "Piramide.h"
#include "Tronco.h"


using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "");
	Prisma p1(3, 7.5, 8.0);
	p1.ListaDados();
	cout << "\n--------------------------------\n";
	Piramide p3(4, 8.7, 9.6);
	p3.ListaDados();
	cout << "\n--------------------------------\n";
	Tronco p2(6, 18, 15, 4);
	p2.ListaDados();
	system("pause>0");
}
