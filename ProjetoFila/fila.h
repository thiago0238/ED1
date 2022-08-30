#ifndef FILA_H
#define FILA_H

#include <QString>
namespace tam{
    class fila
    {
        private:
            int tamanho;
            int *array;
            int IF;
            int FF;
            int QTL;
    public:
        fila(int tamanho);
        ~fila();
        bool estaVazia() const;
        bool estaCheia() const;
        // 3 comendos da fila
        void inserir(int elemento);
        void retirar();
        int acessar() const;
        int getQTL();


    };
}

#endif // FILA_H
