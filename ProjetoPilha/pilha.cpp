#include "pilha.h"
namespace tam{
Pilha::Pilha(int tamanho):
    tamanho(0),
    topo(-1),
    array(0)
{
    if(tamanho <= 0) throw QString("Tamanho nao pode ser <= 0");
    try {
        array = new int[tamanho];
        this->tamanho = tamanho;
    } catch (std::bad_alloc&) {
        throw QString("Memoria insuficiente");
    }
}
Pilha::~Pilha(){
    if(array) delete[] array;
    }

bool Pilha::estaCheia() const {
    return (topo == tamanho -1);
    // if (topo == tamanho -1);
    // try{
    //  } catch(std::bad_alloc&){
    //     throw QString("Pilha cheia");
    // }
    }
bool Pilha::estaVazia() const{
    return (topo == -1);
}
void Pilha::inserir(int elemento){
    //1- verificar se esta cheia
    //2- topo ++
    //3- colocar elementos no vetor
    if(estaCheia()){
        throw QString("A PILHA ESTA CHEIA\n");
    }
    else{
        topo ++;
        array[topo] =  elemento;
    }
}
int Pilha::quantidadeDeElementos() const{
    return topo+1;
}

void Pilha::retirar(){
    //verificar se esta vazia
    if (estaVazia()){
        throw QString("A PILHA ESTA VAZIA\n");
    }else{
        array[topo]= 0;
        topo--;
    }
}
int Pilha::acessar() const{
    //1- verificar se esta vazia
    //2- retornar o elemento do topo
    if(estaVazia()){
        throw QString("esta vazia");
    }
    else {
        return array[topo];
    }
}
}

