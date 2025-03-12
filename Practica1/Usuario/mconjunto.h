#ifndef __MCONJUNTO_H__
#define __MCONJUNTO_H__
#include "persona.h"
#include<iostream>
using namespace std;

template<typename T>
class Multiconjunto {
private:
    T c[100];
    int num;
public:
    Multiconjunto();
    bool esVacio() const;
    int cardinalidad() const;
    void anade(const T&objeto);
    void elimina(const T& objeto);
    bool pertenece(const T& objeto) const;
    void mostrar() const;
};

#endif // __MCONJUNTO_H__
