#include <QCoreApplication>
#include <iostream>
#include "llse.h"

int main()
{
    LLSE teste;

    try {
        std::cout<<"A fila esta vazia ? ";
        std::cout<<teste.estaVazia()<<"\n";

        std::cout<<"\ninserir 4 elementos na tela: 1, 2, 3, 4 \n";
        teste.inserirFim(1);
        teste.inserirFim(2);
        teste.inserirFim(3);
        teste.inserirFim(4);

        std::cout<<"\nA fila esta vazia ? ";
        std::cout<<teste.estaVazia()<<"\n";

        std::cout<<"\n Retirar 4 elementos \n";
        teste.retirarFim();
        teste.retirarFim();
        teste.retirarFim();
        teste.retirarFim();

        std::cout<<"\nA fila esta vazia ? ";
        std::cout<<teste.estaVazia()<<"\n";

        std::cout<<"\n Retirar 1 elemento \n";
        teste.retirarFim();

    } catch (QString &erro) {
        std:: cout<<"\nERRO : "<<erro.toStdString()<<"\n\n";
    }
}
