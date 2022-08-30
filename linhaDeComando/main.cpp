#include "mainwindow.h"

#include <QApplication>
#include <iostream>

int main()
{
    int x=10;
    int y=30;
    int *p=0;
    int p2=0;

    //COMANDOS
    std::cout<<"Valor de x: "<<x<<"\n";
    std::cout<<"endereco de x: "<<&x<<"\n";
    std::cout<<"Valor de y: "<<y<<"\n";
    std::cout<<"Valor de p: "<<p<<"\n";
    std::cout<<"Valor de p2: "<<p2<<"\n";
}
