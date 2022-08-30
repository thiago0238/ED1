#include <QCoreApplication>
#include "recursividade.h"
#include <iostream>

int main()
{
    tam::Recursividade teste;
    try {
        std::cout<<"Exercicio 11 \n ";
        std::cout<<"Soma por interativo: ";
        std::cout<<teste.soma99I()<<"\n";
        std::cout<<"Soma por Recursivo: ";
        std::cout<<teste.soma99R(1,1)<<"\n";

        std::cout<<"\nExercicio 12 \n ";
        std::cout<<"Soma por interativo: ";
        std::cout<<teste.soma50I()<<"\n";
        std::cout<<"Soma por Recursivo: ";
        std::cout<<teste.soma50R(50,1)<<"\n";

        std::cout<<"\nExercicio 13 \n ";
        std::cout<<"Soma por interativo: ";
        std::cout<<teste.somaMultiI()<<"\n";
        std::cout<<"Soma por Recursivo: ";
        std::cout<<teste.somaMultiR(38,37,1)<<"\n";

        std::cout<<"\nExercicio 14 \n ";
        std::cout<<"Soma por interativo: ";
        std::cout<<teste.soma100I()<<"\n";
        std::cout<<"Soma por Recursivo: ";
        std::cout<<teste.soma100R(1,1)<<"\n";

        std::cout<<"\nExercicio 15 \n ";
        std::cout<<"Soma por interativo: ";
        std::cout<<teste.soma1000I()<<"\n";
        std::cout<<"Soma por interativo: ";
        std::cout<<teste.soma1000R(1000,1)<<"\n";

        std::cout<<"\nExercicio 16 \n ";
        std::cout<<"Soma por interativo: ";
        std::cout<<teste.somaQI(10,1,1)<<"\n";
        std::cout<<"Soma por Recursivo: ";
        std::cout<<teste.somaQR(10,1,1)<<"\n";

        std::cout<<"\nExercicio 17 \n ";
        std::cout<<"Soma por interativo: ";
        std::cout<<teste.soma17I(4,1,1)<<"\n";
        std::cout<<"Soma por Recursivo: ";
        std::cout<<teste.soma17R(4,1,1)<<"\n";

        std::cout<<"\nExercicio 18 \n ";
        std::cout<<"Soma por interativo: ";
        std::cout<<teste.soma18I(4,0)<<"\n";
        std::cout<<"Soma por Recursivo: ";
        std::cout<<teste.soma18R(4,0)<<"\n";

        std::cout<<"\nExercicio 20 \n ";
        std::cout<<"Soma por interativo: ";
        std::cout<<teste.soma20I(4,2)<<"\n";
        std::cout<<"Soma por Recursivo: ";
        std::cout<<teste.soma20R(4,0)<<"\n";

        std::cout<<"\nExercicio 19 \n ";
        std::cout<<"fibronacci por interativo: ";
        QString saida;
       // saida += teste.fibronacciInt(10);
        std::cout<<"fibronaccipor Recursivo: ";
        std::cout<<teste.fibronacci(55);




    }  catch (QString &erro) {
        std:: cout<<"\nERRO : "<<erro.toStdString()<<"\n\n";
    }

}
