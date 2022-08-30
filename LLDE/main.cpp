#include <QCoreApplication>
#include "llde.h"
#include <iostream>
int main()
{
    LLDE teste;
    try {

        teste.inserirInicio(10);
        teste.inserirInicio(20);
        teste.inserirInicio(30);


        std::cout<<teste.retirarInicio();
        std::cout<<teste.retirarInicio();
        std::cout<<teste.retirarInicio();
        std::cout<<teste.retirarInicio();
    } catch (QString &erro) {
        std:: cout<<"\nERRO : "<<erro.toStdString()<<"\n\n";
    }

}
