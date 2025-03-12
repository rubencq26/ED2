#ifndef __PERSONA_H__
#define __PERSONA_H__

#include<iostream>
#include<string>

using namespace std;
class Persona
{
public:
Persona(const string& n = "", int e = 0);
const string& getNombre() const;
int getEdad() const;
void setNombre(const string& n);
void setEdad(int e);
bool operator==(const Persona& p) const;

friend ostream& operator<<(ostream& os, const Persona& p);
private:
string nombre;
int edad;
};

#endif // __PERSONA_H__
