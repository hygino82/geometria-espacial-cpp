#include <iostream>
#include "Poliedro.h"
using namespace std;

int main()
{
    Poliedro p1(3, 4.7, 3.6);
    cout <<"Altura: " <<p1.getAltura() << endl;
    cout << "Aresta: " << p1.getAresta() << endl;
    cout << "Base: " << p1.getTipoBase() << endl;
}
