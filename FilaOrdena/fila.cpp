#include "fila.h"
namespace taM{
int Fila::getQuantidadeDeElementos() const
{
    return quantidadeDeElementos;
}

void Fila::setQuantidadeDeElementos(int newQuantidadeDeElementos)
{
    quantidadeDeElementos = newQuantidadeDeElementos;
}

Fila::Fila(int tamanho):

   tamanho(0),
   array(0),
   inicioFila(-1),
   fimFila(-1),
   quantidadeDeElementos(0)

{
    if (tamanho <= 0) throw QString("TAMANHO NÃO PODE SER <= 0 ");
    try {
       array = new int[tamanho];
       this->tamanho = tamanho;
   }  catch (std::bad_alloc&) {
       throw QString ("MEMÓRIA INSUFICIENTE");
   }
}
Fila::~Fila(){
   if(array) delete[] array;
}

bool Fila::estaCheia() const {
    return (quantidadeDeElementos == tamanho);
}
bool Fila::estaVazia() const {
    return (quantidadeDeElementos == 0);
}
void Fila::inserir(int elemento) {

    if (Fila::estaCheia())throw QString (" A FILA ESTÁ CHEIA ");
    if (Fila::estaVazia()){
       inicioFila = fimFila = 0;
       array[fimFila] = elemento;
       quantidadeDeElementos++;
       return;
    }
    fimFila++;
    if (fimFila==tamanho){
        fimFila=0;
        array[fimFila] = elemento;
        quantidadeDeElementos++;
        return;
    }
    array[fimFila] = elemento;
    quantidadeDeElementos++;
    return;
}
void Fila::retirar() {
    if (Fila::estaVazia()){ throw QString("A FILA ESTÁ VAZIA");

    }else if (inicioFila==fimFila){
        inicioFila=fimFila=-1;
        quantidadeDeElementos--;

    }else{
        inicioFila++;
        if (inicioFila==tamanho ){
            inicioFila=0;
            quantidadeDeElementos--;
        }else {
            quantidadeDeElementos--;
        }
    }
}
int Fila::acessar() const{
    return array[inicioFila];
}


}
