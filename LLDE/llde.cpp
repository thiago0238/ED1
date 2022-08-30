#include "llde.h"
#include <QString>
#include <iostream>

LLDE::LLDE():
    qtd(0),
    inicio(0),
    fim(0)
{

}
  LLDE::~LLDE(){
      if (inicio) delete inicio;
      if (fim) delete fim;

  }
  bool LLDE::estaVazia() const{
      if(qtd == 0)
          return true;
      else
          return false;

  }
  void LLDE::inserirInicio(int elemento){
      try {
          NO *aux = new NO(elemento);
          if(estaVazia()){
              qtd++;
              inicio=fim=aux;
              return;
          }

          aux->setProximo(inicio);
          inicio->setAnterior(aux);
          inicio = aux;
          qtd++;
      }
      catch (QString &bad_alloc) {
          std:: cout<<"\nERRO : "<<bad_alloc.toStdString()<<"\n";


      }
  }
  void LLDE::inserirFim(int elemento){
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
  void LLDE::inserirQualquer(int pos, int elemento){

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
  int LLDE::retirarInicio(){
      if(estaVazia())
          throw QString("esta Vazia");
      if(qtd==1){
         int valor = inicio->getDado();
         delete inicio;
         qtd--;
         inicio=fim=0;
         return valor;
      }
      else
      {
      NO *aux = inicio;
      //inicio->getProximo()->setAnterior(0); maneira usual, mas comprida.
      inicio= aux ->getProximo();
      inicio->setAnterior(0);
      qtd--;
      int valor = aux->getDado();
      delete aux;
      return valor;
      }
  }
  int LLDE::retirarFim(){
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
  int LLDE::retirarQualquer(int pos){
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
  int LLDE::getQtd() const{
      return qtd;
  }


  int LLDE::acesar(int pos){
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
