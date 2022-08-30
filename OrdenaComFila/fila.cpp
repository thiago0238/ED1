#include "fila.h"
namespace tam{
Fila::Fila(int tamanho):
    tamanho(0),
    QTL(0),
    array(0),
    IF(0),
    FF(0)
{
    if(tamanho <= 0) throw QString("Tamanho nao pode ser <= 0");
    try {
        array = new int[tamanho];
        this->tamanho = tamanho;
    } catch (std::bad_alloc&) {
        throw QString("Memoria insuficiente");
    }

}
Fila::~Fila(){
    if(array) delete[] array;
}
bool Fila::estaCheia() const{
    return (QTL==tamanho);
}
bool Fila::estaVazia() const{
    return (QTL==0);
}
void Fila::inserir(int elemento){
    //1- verificar se esta cheia
    if(estaCheia()){
        throw QString("A FILA ESTA CHEIA\n");
    }
    if(estaVazia()){
        IF= FF= 0;
        array[FF] =  elemento;
        QTL ++;
        return;
    }
    FF++;
    if(FF==tamanho){
        FF=0;
        array[FF]= elemento;
        QTL ++;
        return;
    }

    array[FF] =  elemento;
    QTL ++;
    return;

}
int Fila::acessar() const{
    if(estaVazia()){
        throw QString("A FILA ESTA VAZIA\n");
    }
    else
    return array[IF];
}
void Fila::retirar(){
    //1- verificar se esta vazia
    if(estaVazia() ){
        throw QString("A FILA ESTA VAZIA\n");
    }

    else{
        IF ++;

        if(IF == tamanho){
            QTL --;
            IF=0;
            return;
    }
      else{
            QTL --;
            return;
        }
    }

}
int Fila::getQTL(){
    return QTL;
}

}
