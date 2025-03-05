#include <iostream>
#include "mconjunto.h"

using namespace std;

int main()
{
    Multiconjunto<int> conj;
    conj.anade(12);
    conj.anade(1);
    conj.anade(34);
    conj.anade(1);
    conj.anade(1);
    conj.anade(1);
    conj.anade(1);
    conj.mostrar();
    cout<<conj.cardinalidad()<<endl;
    cout<<conj.pertenece(1)<<endl;
    cout<<conj.pertenece(2)<<endl;
    conj.elimina(1);
    cout<<conj.pertenece(1)<<endl;
    conj.mostrar();


    return 0;
}
