#ifndef LLSE_H
#define LLSE_H
#include "lista.h"

class LLSE
{
    NO *inicio; // nesse caso nao há um set, para nao acorrer o risco de perder os dados dele
                // a alteração dos dados dele sera pelos metodos de retirar e inserir
    int qtd;

public:
    LLSE();
    ~LLSE();
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

#endif // LLSE_H
