#include "recursividade.h"

namespace tam {
    Recursividade::Recursividade()
    {

    }
    long double Recursividade::soma99I(){
        float y=1;
        long double k=0.0;
        for(int x=1; x<=99;x+=2){
            k = k + x/y;
            y++;
        }
        return k;
    }
    long double Recursividade::soma99R( long double d, long double h){
        if(d<=99) return d/h + soma99R(d+2, h+1);
        else return 0;
    }
    long double Recursividade::soma50I(){
        float y=1;
        long double k=0.0;
        for(int x=50; x>0;x--){
            k = k + pow(2, y)/x;
            y++;
        }
        return k;
    }
    long double Recursividade::soma50R(long double d, long double h){
        if(d>0) return pow(2,h)/d + soma50R(d-1, h+1);
        else return 0;
    }
    long double Recursividade::somaMultiI(){
        float e=38, r=37;
        long double k=0;
        for(int x=1;x<=37;x++){
            k=k+ (e*r)/x;
            e--;
            r--;
        }
        return k;

    }
    long double Recursividade::somaMultiR(long double d, long double h, long double y){
        if(y<=37) return (d*h)/y + somaMultiR(d-1, h-1,y+1);
        else return 0;
    }
    long double Recursividade::soma100I(){
        float e=1, r=0;
        long double k=0.0;
        for(int x=1;x<=10; x++){
            r=pow(e,2);
            if(x%2==0)
                k=k-(e/r);
            else
            k= k+ (e/r);
            e++;
        }

        return k;
    }
    long double Recursividade::soma100R(long double d,  int y){
        if(y<=10){
            if(y%2==0)
                return (-d/pow(d,2)) + soma100R(d+1, y+1);
            else
                return (d/pow(d,2)) + soma100R(d+1, y+1);
        }
        else return 0;
    }

    long double Recursividade::soma1000I(){
        int  r=1;
        long double k=0.0;
        for(int x=1000;x>=0; x-=3){
            if(r%2==0)
                k= k -(x/r);
            else
                k = k + (x/r);
            r++;
        }

        return k;
    }
    long double Recursividade::soma1000R(long double d,  int y){
        if(d>=0){
            if(y%2==0)
                return (-d/y) + soma1000R(d-3, y+1);
            else
                return (d/y) + soma1000R(d-3, y+1);
        }
        else return 0;
    }
    long double Recursividade::somaQI(double x, double y, int z){
        double S = 0;

        while (y < 100){
            if (z%2 == 0 && z > 1){
                S -= (pow(x,y))/somatorioFatorial(y);

                y += 2;
                z++;
            }
            else {
                S += (pow(x,y))/somatorioFatorial(y);

                y += 2;
                z++;
            }
        }

        return S;
    }
    long double Recursividade::somaQR( double x, double y, int z){
        if (y < 100){
           if (z%2 == 0 && z > 1){
                return -(pow(x,y))/somatorioFatorial(y) + somaQR(x,y+2,z+1);
            }
           else {
               return (pow(x,y))/somatorioFatorial(y) + somaQR(x,y+2,z+1);
           }

        }
        else return 0;
    }
    double Recursividade::somatorioFatorial(double valor){
        if(valor > 0) return valor * somatorioFatorial(valor-1);
        else return 1;
    }

    double Recursividade::soma17I(double x, double y, int z){
        double S = 0;

        while (y < 100){
            if (z%2 == 0 && z > 1){
                S -= x/y;

                y += 2;
                z++;
            }
            else {
                S += x/y;

                y += 2;
                z++;
            }
        }

        return S;
    }
    double Recursividade::soma17R(double x, double y, int z){
        if (y < 100){
           if (z%2 == 0 && z > 1){
                return -x/y + soma17R(x,y+2,z+1);
            }
           else {
               return x/y + soma17R(x,y+2,z+1);
           }

        }
        else return 0;

    }
    double Recursividade::soma18I(double x, double y){
            double S = 0;

            while (y < 100){

                    S += (pow(x,y))/somatorioFatorial(y);

                    y += 1;

                }


            return S;
        }
         double Recursividade::soma18R( double x, double y){
            if (y < 100){

                   return (pow(x,y))/somatorioFatorial(y) + soma18R(x,y+1);


            }
            else return 0;
        }
   QString Recursividade::fibronacciInt(int d){
       QString saida;
        pont= new int[d];
        for(int x=1; x<=d;x++){
            if(x==1||x==2)
                pont[x]=1;
            else{
                pont[x]=pont[x-1] + pont[x-2];
            }
        }
        for(int x=1; x<=d;x++){
          saida += QString::number(pont[x])+ " ";
        }
        return saida;
    }
    long int Recursividade::fibronacci(int valor){
        if (valor == 1 || valor == 2 )
                       return 1;
                   else
                       return fibronacci(valor-1) + fibronacci(valor - 2 );

    }
    double Recursividade::soma20I(int x,int y){
        int resto =0;
            if(x>=y && x%y==0)
                return y;
            else{
                if(x<y){
                    while(y !=0){
                        resto = x%y;
                        x =y;
                        y=resto;
                    }
                    return x;
                }
                else{
                    x=x%y;
                    while(y !=0){
                        resto = x%y;
                        x =y;
                        y=resto;
                    }
                    return x;
                }

            }
        }
         double Recursividade::soma20R( double x, double y){
            if (y < 100){

                   return (pow(x,y))/somatorioFatorial(y) + soma18R(x,y+1);


            }
            else return 0;
        }

}
