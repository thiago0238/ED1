#include "recursividade.h"

recursividade::recursividade():
    array(0)
{
    try {
        array = new int[100];
    } catch (std::bad_alloc&) {
        throw QString("Memoria insuficiente");
    }

}
recursividade::~recursividade(){
    if(array) delete[] array;
}
int recursividade::paresI(int valo){
    int soma =0;
    if(valo<=0)
        throw QString ("Nao pode ser menor q 0\n");
    else{
        for(int i=0; i<valo; i++){
            if(array[i]%2==0){
                soma += array[i];

            }

        }

    }
    return soma;
}

int recursividade::paresR(int valo){

    if(valo<100){
        if(array[valo]%2==0){
            return array[valo] + paresR(valo+1);
        }
        else
            return paresR(valo+1);
    }
    else return 0;
}
