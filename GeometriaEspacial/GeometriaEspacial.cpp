#include <iostream>
#include "Prisma.h"
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "");

    Prisma p1(4, 10, 20);
    cout << "Prisma\n";
    cout <<"Altura: " <<p1.getAltura() << endl;
    cout << "Aresta: " << p1.getAresta() << endl;
    cout << "Base: " << p1.getTipoBase() << endl;
    cout << "�rea da base: " << p1.AreaBase() << endl;
    cout << "�rea lateral: " << p1.AreaLateral() << endl;
    cout << "�rea total: " << p1.AreaTotal() << endl;
    cout << "Volume: " << p1.Volume() << endl;

    system("pause>0");
}
