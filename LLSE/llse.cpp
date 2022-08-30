#include "llse.h"
#include <QString>
#include <iostream>

LLSE::LLSE():
    inicio(0),
    qtd(0)

{

}
LLSE::~LLSE(){
    if (inicio) delete inicio;

}
bool LLSE::estaVazia() const{
    if(qtd == 0)
        return true;
    else
        return false;

}
void LLSE::inserirInicio(int elemento){
    try {
        NO *aux = new NO(elemento);
            aux->setProximo(inicio);
            inicio = aux;
            qtd++;



    }
    catch (QString &erro) {
        std:: cout<<"\nERRO : "<<erro.toStdString()<<"\n";


    }
}
void LLSE::inserirFim(int elemento){
    try {
        NO *aux = new NO(elemento);
        if(estaVazia()){
            inicio = aux;
            qtd++;
            return;
        }else{
        NO *paux= inicio;
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
void LLSE::inserirQualquer(int pos, int elemento){

    try {
        NO *aux = new NO(elemento);
        NO *paux= inicio;
        int cont = 0;
        if(pos == qtd){

            while (paux->getProximo() != 0 ){
                paux= paux->getProximo();
            }
            paux->setProximo(aux);
            qtd++;
            return;
        }
        if(estaVazia()){
            inicio = aux;
            qtd++;
            return;
        }
        if(pos ==0)
            return inserirInicio(elemento);
        else {
            while(cont <pos-1){
                paux = paux->getProximo();
                cont++;
        }
            NO *paux2= paux->getProximo()->getProximo();
            paux->setProximo(aux);
            paux->getProximo()->setProximo(paux2);
            qtd++;


        }
    }    catch (QString &erro) {
        std:: cout<<"\nERRO : "<<erro.toStdString()<<"\n";

    }
}
int LLSE::retirarInicio(){
    if(estaVazia())
        throw QString("esta Vazia");
    else
    {
    NO*aux = inicio;
    inicio= inicio ->getProximo();
    int valor = aux->getDado();
    delete aux;
    qtd--;
    return valor;
    }
}
int LLSE::retirarFim(){
    if(estaVazia()) {
        throw QString("esta Vazia");
    }
        else {


     NO *paux= inicio;
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
int LLSE::retirarQualquer(int pos){
    if(estaVazia())
        throw QString("esta Vazia");

       if(pos<0 || pos >=qtd)
           throw QString("Posição invalida");
       if(pos ==0)
           return retirarInicio();
       else{
           NO *paux = inicio;
           int cont = 0;
           while(cont <pos-1){
               paux = paux->getProximo();
               cont++;
           }
           NO *paux2 = paux->getProximo();
           paux->setProximo(paux2->getProximo());
           int valor = paux2 ->getDado();
           delete paux2;
           qtd--;
           return valor;
        }
}
int LLSE::getQtd() const{
    return qtd;
}


int LLSE::acesar(int pos){
    if(estaVazia())
        throw QString("esta Vazia");

       if(pos<0 || pos >=qtd)
           throw QString("Posição invalida");
       else{
           NO *paux = inicio;
           int cont = 0;
           while(cont < pos){
               paux = paux->getProximo();
               cont ++;
           }
           return paux->getDado();
       }
}

