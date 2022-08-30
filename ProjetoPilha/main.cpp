#include <iostream>
#include <QString>
#include <pilha.h>
int main()
{
    int tamanho =2;
    int topo =1 ;
    try {
        tam::Pilha teste(tamanho);
        tam::Pilha cheia(topo);
    }  catch (QString &erro) {
        std:: cout<<"\nERRO NA PILHA: "<<erro.toStdString()<<"\n";
        std:: cout<<"\nErro no Topo: "<<erro.toStdString()<<"\n";
    }
}
