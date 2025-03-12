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
    for(int i = 0; i < this->num; i++){
        if(c[i] == objeto){
            for(int j = i;j <num -1; j++){
                c[j] = c[j + 1];
            }
            num--;
            i--;
        }
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

template <typename T> void Multiconjunto<T>::mostrar() const{
    cout<<"Lista: "<<endl;
    for(int i = 0; i < num;i++){
        cout<<c[i]<<endl;
    }
}

template class Multiconjunto<int>;
template class Multiconjunto<char>;
template class Multiconjunto<double>;
template class Multiconjunto<long>;
template class Multiconjunto<short>;
template class Multiconjunto<bool>;
template class Multiconjunto<Persona>;
