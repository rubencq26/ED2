#include "mconjunto.h"

template <typename T> Multiconjunto<T>::Multiconjunto(){
    this->num = 0;
}

template <typename T> bool Multiconjunto<T>::esVacio() const{
    if(this->num == 0){
        return true;
    }
    return false;
}

template <typename T> int Multiconjunto<T>::cardinalidad() const{
    return this->num;
}

template <typename T> void Multiconjunto<T>::anade(const T& objeto){
    if(this->num < 100){
        c[num] = objeto;
        num++;
    }
}

template <typename T> void Multiconjunto<T>::elimina(const T& objeto){
    int n[num];
    int x = 0;
    for(int i = 0; i < this->num; i++){
        if(c[i] == objeto){
            n[x] = i;
            x++;
        }
    }
    for(int i = --x; i > 0; i--){
        for(int j = n[i]; j < num ;j++){
            c[j] = c[j+1];
        }
        num--;
    }
}

template <typename T> bool Multiconjunto<T>::pertenece(const T& objeto) const{
    bool esta =false;
    for(int i = 0; i < num; i++){
        if(c[i] == objeto){
            esta = true;
        }
    }
    return esta;
}

template class Multiconjunto<int>;
template class Multiconjunto<char>;
template class Multiconjunto<double>;
template class Multiconjunto<long>;

