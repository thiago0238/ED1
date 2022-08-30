#include "no.h"

NO::NO()
{

}
NO::NO(int valor):
    dado(0),
    proximo(0),
    anterior(0)
{

}
NO::~NO(){
 proximo=0;
 anterior = 0;

}
int NO::getDado() const{
  return dado;
}
void NO::setDado(int newDado){
  dado = newDado;
}
NO* NO::getProximo() const{
  return proximo;
}
void NO::setProximo(NO *newProximo){
  proximo = newProximo;
}
NO* NO::getAnterior() const{
  return anterior;
}
void NO::setAnterior(NO *newAnterior){
  proximo = newAnterior;
}
