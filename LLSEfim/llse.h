#ifndef LLSE_H
#define LLSE_H
#include "no.h"

class LLSE
{
    No *inicio; // nesse caso nao há um set, para nao acorrer o risco de perder os dados dele
     // a alteração dos dados dele sera pelos metodos de retirar e inserir
    int qtd;

public:
    LLSE();
    void inserirInicio(int elemento);
    int getQtd() const;
    int retirarInicio();
    bool estaVazia() const;
    void inserirFim(int elemento);
    int retirarFim();
};
#endif // LLSE_H
