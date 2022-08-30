#include <QString>
#include "llse.h"
#include <iostream>

LLSE::LLSE():
    inicio(0),
     qtd(0)
{

}
bool LLSE::estaVazia() const{
    if(qtd == 0)
        return true;
    else
        return false;

}
void LLSE::inserirInicio(int elemento){
    try {
        No *aux = new No(elemento);
        aux->setProximo(inicio);
        inicio = aux;
        qtd++;

    }
    catch (QString &erro) {
        std:: cout<<"\nERRO : "<<erro.toStdString()<<"\n";


    }
}
int LLSE::retirarInicio(){
    if(estaVazia())
        throw QString("esta Vazia");
    else
    {
    No*aux = inicio;
    inicio= inicio ->getProximo();
    int valor = aux->getDado();
    delete aux;
    qtd--;
    return valor;
    }
}
int LLSE::getQtd() const{
    return qtd;
}
void LLSE::inserirFim(int elemento){
    try {
        No *aux = new No(elemento);
        if(estaVazia()){
            inicio = aux;
            qtd++;
            return;
        }else{
        No *paux= inicio;
        while (paux->getProximo() != 0 ){
            paux= paux->getProximo();
        }
        paux->setProximo(aux);
        qtd++;
        }
    }    catch (QString &erro) {
        std:: cout<<"\nERRO : "<<erro.toStdString()<<"\n";

    }

}
int LLSE::retirarFim(){
    if(estaVazia()) {
        throw QString("esta Vazia");
    }
        else {


     No *paux= inicio;
     if(inicio->getProximo()==0){
         int valor= inicio->getDado();
         delete inicio;
         qtd--;
         inicio=0;
         return valor;
     }
         while(paux->getProximo()->getProximo()!=0){
            paux = paux->getProximo();
         }

         int valor = paux->getProximo()->getDado();
         delete paux->getProximo();
         paux->setProximo(0);
         qtd--;
         return valor;
        }

    }

