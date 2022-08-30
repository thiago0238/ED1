#ifndef ORDENA_H
#define ORDENA_H
#include <QString>
#include <cstdlib>
#include <fila.h>
namespace taM{
class Ordena       
{
private:
    taM::Fila *filaPrincipal;
    int tamanho;
    int *vet;

public:
    Ordena(int tamanho);
    ~Ordena();

    void inserirNaFila();
    void OrdenaF();

    QString getFilaOrdenada() const;
    QString getVetorDesordenado() const;

};
}
#endif // ORDENA_H
