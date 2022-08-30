#ifndef FILA_H
#define FILA_H

#include <QString>
namespace tam{
class Fila
{
    int tamanho;
    int IF;
    int FF;
    int *array;
    int QTL;
public:
    Fila(int tamanho);
    ~Fila();
    int getQTL();
    int acessar() const;
    void retirar();
    void inserir(int elemento);
    bool estaCheia() const;
    bool estaVazia() const;
};
}
#endif // FILA_H
