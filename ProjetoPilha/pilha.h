#ifndef PILHA_H
#define PILHA_H
#include <QString>
namespace tam{
    class Pilha
    {
        //Atributos
        private:
            int tamanho;
            int topo;
            int *array;
        public:
            Pilha(int tamanho);
            ~Pilha();
            bool estaCheia() const;
            bool estaVazia() const;
            void inserir(int elemento);
            int quantidadeDeElementos() const;
            int acessar() const;
            void retirar();
        };
}

#endif // PILHA_H
