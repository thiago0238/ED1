#include "ordena.h"
#include <iostream>
#include <cstdlib>
namespace taM{
Ordena::Ordena(int tamanho):
    tamanho(0),
    vet(0)
{
    if(tamanho <= 0) throw QString("Tamanho não pode ser <= 0");
    try {        
        filaPrincipal = new taM::Fila(tamanho);
        vet = new int[tamanho];
        this->tamanho = tamanho;

        for (int i = 0 ; i < tamanho ; i++){
            vet[i] = rand()%10;

        }
            inserirNaFila();


    } catch (std::bad_alloc&) {
        throw QString("Memoria insuficiente");
    }
}
void Ordena::inserirNaFila(){   //ORGANIZADOR DA FILA
    int menor=100,aux,cont;
        for(int i = 0; i < tamanho; i++)
        {
            cont=0;
            if(filaPrincipal->estaVazia())
            {
                menor = vet[i];
                filaPrincipal->inserir(vet[i]);
            }
            else
            {
                if(menor > vet[i]) menor = vet[i];
                if(filaPrincipal->getQuantidadeDeElementos()==1)
                {
                    if(filaPrincipal->acessar()<=vet[i])
                    {
                        filaPrincipal->inserir(vet[i]);
                    }
                    else
                    {
                        filaPrincipal->inserir(vet[i]);
                        aux = filaPrincipal->acessar();
                        filaPrincipal->retirar();
                        filaPrincipal->inserir(aux);
                    }
                }
                else
                {
                    while(filaPrincipal->acessar()<=vet[i] && cont!=filaPrincipal->getQuantidadeDeElementos())
                    {
                        cont++;
                        aux = filaPrincipal->acessar();
                        filaPrincipal->retirar();
                        filaPrincipal->inserir(aux);
                    }
                    filaPrincipal->inserir(vet[i]);
                    while(filaPrincipal->acessar() != menor)
                    {
                        aux = filaPrincipal->acessar();
                        filaPrincipal->retirar();
                        filaPrincipal->inserir(aux);
                    }
                }
            }
        }
}

QString Ordena::getVetorDesordenado() const{

    QString saida = "";
    for (int pos = 0 ; pos < tamanho ; pos++){
        saida += QString::number(vet[pos])+ " ";
    }
    return saida;
  }
QString Ordena::getFilaOrdenada() const{

    QString saida = "";
    while (!filaPrincipal ->estaVazia()){
        saida += QString::number(filaPrincipal->acessar())+ " ";
        filaPrincipal->retirar();
    }
    return saida;
  }


Ordena::~Ordena()
{
    if (filaPrincipal) delete filaPrincipal;
    if (vet) delete[] vet;


}
}
