#include "ordenavetor.h"

OrdenaVetor::OrdenaVetor(int tamanho):
    QTL(0),
    tamanho(0),
    ordena(0),
    VetorDesordenado(0),
    VetorOrdenado(0)
{
    if(tamanho <= 0) throw QString("Tamanho nao pode ser <= 0");
    try {
        filaPrincipal = new tam::Fila(tamanho);
        VetorDesordenado = new int [tamanho];
        VetorOrdenado = new int [tamanho];
        this->tamanho = tamanho;
    } catch (std::bad_alloc&) {
        throw QString("Memoria insuficiente");
    }
}

OrdenaVetor::~OrdenaVetor(){
    if(VetorDesordenado) delete[] VetorDesordenado;
    if(VetorOrdenado) delete[] VetorOrdenado;

}
void OrdenaVetor::Pvetor(int tamanho){
    for(int i=0; i<tamanho;i++)
        VetorDesordenado[i] = rand()%10;
}
QString OrdenaVetor::getVetorDesordenado(int tamanho){
    QString saida = "";
    for(int i =0; i<tamanho; i++){
        saida += QString::number(VetorDesordenado[i]) + " ";
    }
    return saida;
}
void OrdenaVetor::inserirFila(int elemento){
    if(filaPrincipal-> estaVazia()){
        filaPrincipal->inserir(elemento);
    }
    if(filaPrincipal->acessar() > elemento){
        int aux = filaPrincipal -> acessar();
        filaPrincipal->inserir(elemento);
        filaPrincipal->retirar();
        filaPrincipal->inserir(aux);
    }
}
