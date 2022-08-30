#include <QCoreApplication>

#include <QString>
#include "fila.h"
#include <iostream>
int main()
{
    int tamanho = 4;
    try {
        tam::fila teste(tamanho);

    //1 esta cheia
        std::cout<<"esta a fila esta cheia ? ";    //1= SIM   0= NAO
        std::cout<<teste.estaCheia()<<"\n";

    //2 esta vazia
        std::cout<<"\n esta a fila esta vazia ? ";
        std::cout<<teste.estaVazia()<<"\n";

    //3 inserir na pilha
        std::cout<<"\n insira 4 elementos na fila: 1, 2, 3, 4  ";
        teste.inserir(1);
        teste.inserir(2);
        teste.inserir(3);
        teste.inserir(4);
 //       teste.inserir(4);

    //4 esta cheia
        std::cout<<"\n esta a fila esta cheia ?  ";
        std::cout<<teste.estaCheia()<<"\n";

    //5 esta vazia
        std::cout<<"\n esta a fila esta vazia ?  ";
        std::cout<<teste.estaVazia()<<"\n";

    //6 retirar elemento
        // std::cout<<"\n retirar 5 elementos na pilha\n";
         teste.retirar();
         teste.retirar();
         teste.retirar();
         teste.retirar();
         teste.retirar();

    //7 colocar o item 6 como comentario

    //8 acessar o primeiro elemento
         std::cout<<"\n primeiro da fila ?  ";
         std::cout<<teste.acessar()<<"\n";

     //9 retirar elemento
         std::cout<<"\n retirar 1 elemento na fila  ";
         teste.retirar();

     //10 acessar o primeiro elemento
          std::cout<<"\n primeiro da fila ?  ";
          std::cout<<teste.acessar()<<"\n";

     //11 acessar o primeiro elemento
           std::cout<<"\n retira 1 elementos ";
           teste.retirar();

           std::cout<<"\n primeiro da fila ?  ";
           std::cout<<teste.acessar()<<"\n";

           std::cout<<"\n retira 1 elementos  ";
           teste.retirar();

           std::cout<<"\n primeiro da fila ?  ";
           std::cout<<teste.acessar()<<"\n";

     //12 inserir na pilha
           std::cout<<"\n insira elemento na fila: 5 \n ";
           teste.inserir(5);

     //13 acessar o primeiro elemento
            std::cout<<"\n retira 1 elementos   ";
            teste.retirar();

            std::cout<<"\n primeiro da fila ?  ";
            std::cout<<teste.acessar()<<"\n\n";


    }  catch (QString &erro) {
         std:: cout<<"\nERRO NA PILHA: "<<erro.toStdString()<<"\n";
    }
}
