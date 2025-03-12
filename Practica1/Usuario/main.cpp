#include <iostream>
#include "mconjunto.h"
#include "persona.h"

using namespace std;

int main()
{
    Multiconjunto<Persona> conj;
    conj.anade(Persona("Juan Diego",15));
    conj.anade(Persona("Ruben Conde", 19));
    conj.anade(Persona("Matias Pratt", 56));
    conj.anade(Persona("Paco Porras", 65));
    conj.mostrar();
    Persona p1 ("Ruben Conde", 19);
    cout<<conj.pertenece(p1);
    conj.elimina(p1);
    conj.mostrar();
    cout<<p1.getNombre()<<endl;
    cout<<p1.getEdad()<<endl;

    return 0;
}
