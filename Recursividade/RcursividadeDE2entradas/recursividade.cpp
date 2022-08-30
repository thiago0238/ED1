#include "recursividade.h"
namespace tam {


Recursividade::Recursividade():
    x(0),
    y(0)
{

}
int Recursividade::processamanentoI(int x, int y){
    int k=0;
    //QString saida;
    k=x;
    if(x<=0)
        throw QString ("Nao pode ser menor q 0\n");
    if(x==1)
       return x;
    else if(x>1){
        for(;y>1;y--){
            k = k*x;
        }

    }
     return k;
}
int Recursividade::processamanentoR(int x, int y){
    if(y>1) return processamanentoR(x,y-1) + x*x;
    else return 0;
}
int Recursividade::multiplicaI(int N1, int N2){
    int k=0;
        for(int y=1;y<=N2;y++){
            k = k+N1;
        }
return k;

}
int Recursividade::multiplicaR(int N1, int N2){

    if(N2>0) return multiplicaR(N1,N2-1) + N1;
    else return 0;

}
}
