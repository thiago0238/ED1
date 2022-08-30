#ifndef ORDENAVETOR_H
#define ORDENAVETOR_H
#include "fila.h"

class OrdenaVetor
{

    int QTL;
    int tamanho;
    int ordena;
    int *VetorDesordenado;
    int *VetorOrdenado;


public:
    OrdenaVetor(int tamanho);
    ~OrdenaVetor();
    void Pvetor(int tamanho);
    QString getVetorDesordenado(int tamanho);
    void inserirFila(int elemento);

};

#endif // ORDENAVETOR_H
