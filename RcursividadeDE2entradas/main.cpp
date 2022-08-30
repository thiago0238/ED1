#include <QCoreApplication>
#include <recursividade.h>
#include <iostream>

int main()
{
    //recursividade
    tam::Recursividade teste;
    //QString saida;
    try {
        std::cout<<"Exercicio 9 \n ";
         std::cout<<"Elevacao de um numero interativo: 2^3\n";
         std::cout<<teste.processamanentoI(2,3)<<"\n";
         std::cout<<"Elevacao de um numero recursividade: 2^3\n";
         std::cout<<teste.processamanentoR(2,3)<<"\n";

         std::cout<<"Exercicio 10 \n ";
          std::cout<<"\nmultiplicacao de dois numeros interativo: 4*4\n";
         std::cout<<teste.multiplicaI(4,4)<<"\n";
         std::cout<<"\nmultiplicacao de dois numeros recursividade: 4*4\n";
        std::cout<<teste.multiplicaR(4,4)<<"\n";

    }  catch (QString &erro) {
        std:: cout<<"\nERRO : "<<erro.toStdString()<<"\n\n";
    }
}
