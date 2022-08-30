#include <QCoreApplication>
#include "llse.h"
#include <iostream>

int main()
{
    LLSE teste;

    try {

        std::cout<<"\ninserir  elementos no Fim: 50 \n";
        teste.inserirFim(50);

        std::cout<<"\ninserir  elementos no inicio: 40 \n";
        teste.inserirInicio(40);

        std::cout<<"\ninserir elementos na Posicao 2 o numero 60 \n";
        teste.inserirQualquer(2, 60);

        std::cout<<"\ninserir 1 elementos na Posicao 0 o numero 30 \n";
        teste.inserirQualquer(0, 30);

        std::cout<<"\nAcessar elementos \n";
        std::cout<<" "<<teste.acesar(0)<<" ";
        std::cout<<" "<<teste.acesar(1)<<" ";
        std::cout<<" "<<teste.acesar(2)<<" ";
        std::cout<<" "<<teste.acesar(3)<<" ";


        std::cout<<"\n Retirar elementos no inicio \n";
        std::cout<<" "<<teste.retirarInicio()<<" ";

        std::cout<<"\n Retirar elementos no Fim \n";
        std::cout<<" "<<teste.retirarFim()<<" ";

        std::cout<<"\n Retirar elementos na posicao 1 \n";
        std::cout<<" "<<teste.retirarQualquer(1)<<" ";

        std::cout<<"\n Retirar elementos no inicio \n";
        std::cout<<" "<<teste.retirarInicio()<<" ";

        std::cout<<"\n Retirar elementos no Fim \n";
        std::cout<<" "<<teste.retirarFim()<<" ";


    } catch (QString &erro) {
        std:: cout<<"\nERRO : "<<erro.toStdString()<<"\n\n";
    }
}
