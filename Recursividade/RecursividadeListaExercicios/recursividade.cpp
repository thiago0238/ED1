#include "recursividade.h"
namespace ejm{
long Recursividade::somatorioI(long valor){
    long soma = 0;
    for(; valor>0 ; valor--){
        soma += valor;
    }
    return soma;
}
long Recursividade::somatorioR(long valor){
    if(valor > 0) return valor + somatorioR(valor-1);
    else return 0;
}

}
