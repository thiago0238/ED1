#ifndef RECURSIVIDADE_H
#define RECURSIVIDADE_H
#include <math.h>
#include <QString>

namespace tam {
    class Recursividade
    {
        int *pont;

    public:
        Recursividade();
        long double soma99I();
        long double soma99R(long double d, long double h);
        long double soma50I();
        long double soma50R(long double d, long double h);
        long double somaMultiI();
        long double somaMultiR(long double d, long double h, long double y);
        long double soma100I();
        long double soma100R(long double d, int y);
        long double soma1000I();
        long double soma1000R(long double d, int y);
        long double somaQI(double x, double y, int z);
        long double somaQR(double x,double y, int z);
        double somatorioFatorial(double valor);

        double soma17I(double x, double y, int z);
        double soma17R(double x, double y, int z);
        double soma18I(double x, double y);
        double soma18R(double x, double y);

        double soma20I(int x, int y);
        double soma20R(double x, double y);
       // QString fibronacciInt(int d);
        //long int fibronacci(int valor);
    };
}

#endif // RECURSIVIDADE_H
