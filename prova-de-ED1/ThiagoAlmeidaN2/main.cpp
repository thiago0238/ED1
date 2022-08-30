#include <QCoreApplication>
#include "recursividade.h"


int main()
{
    recursividade teste;
    try {
        std::cout<<"Exercicio 2\n";
        std::cout<<"Somatorio de numeros pares ate 100 interativo: ";
        std::cout<<teste.paresI(100);
        std::cout<<"\nSomatorio de numeros pares ate 100 recursivo: ";
        std::cout<<teste.paresR(0)<<"\n";
    }  catch (QString &erro) {
        std:: cout<<"\nERRO : "<<erro.toStdString()<<"\n\n";
    }
}
