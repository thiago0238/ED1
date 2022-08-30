#ifndef RECURSIVIDADE_H
#define RECURSIVIDADE_H
#include <math.h>
#include <QString>
#include <iostream>

namespace tam{
class Recursividade
{
    int x, y;

public:
    Recursividade();
    int processamanentoI(int x, int y);
    int processamanentoR(int x, int y);
    int multiplicaI(int N1, int N2);
    int multiplicaR(int N1, int N2);
};
}
#endif // RECURSIVIDADE_H
