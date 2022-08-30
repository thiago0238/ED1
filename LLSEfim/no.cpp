#include "no.h"

No::No():
    dado(0),
    proximo(0)
{

}
No::No(int valor):
    dado(valor),
    proximo(0)
{

}
No::~No(){
   proximo=0;
}
int No::getDado() const{
    return dado;
}
void No::setDado(int newDado){
    dado = newDado;
}
No* No::getProximo() const{
    return proximo;
}
void No::setProximo(No *newProximo){
    proximo = newProximo;
}
