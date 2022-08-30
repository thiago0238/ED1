#ifndef LLDE_H
#define LLDE_H
#include "no.h"

class LLDE
{
    NO *inicio;
    NO *fim;
    int qtd;
public:
    LLDE();
    ~LLDE();
    void inserirInicio(int elemento);
    void inserirFim(int elemento);
    void inserirQualquer(int pos, int elemento);
    int getQtd() const;
    int retirarInicio();
    int retirarFim();
    int retirarQualquer(int pos);
    bool estaVazia() const;
    int acesar(int pos);
};

#endif // LLDE_H
