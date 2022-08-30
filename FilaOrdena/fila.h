#ifndef FILA_H
#define FILA_H
#include <QString>
namespace taM{
class Fila
{
   //Atributos
private:
   int tamanho;
   int *array;
   int inicioFila =-1 ;
   int fimFila = -1;
   int quantidadeDeElementos = 0;
public:
   Fila(int tamanho);
   ~Fila();
   bool estaCheia() const;
   bool estaVazia() const;
   void inserir(int elemento);
   void retirar();//sempre do inicio
    int acessar() const; // sempre do inicio
    int getQuantidadeDeElementos() const;
   void setQuantidadeDeElementos(int newQuantidadeDeElementos);
   QString getFila() const;
};
}
#endif // FILA_H
