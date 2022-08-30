#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>


class matriz
{
private:
    int l;
    int c;
    double ** mat;
public:
    matriz();
    ~matriz();
    bool setMatriz(int, int);
    int getL() const;
    int getC() const;

    matriz& operator+(const matriz &direita);//feito
    matriz& operator-(const matriz &direita);//feito
    matriz& operator*(const matriz &direita);//feito

    bool operator==(const matriz& direita)const;//feito
    bool operator>=(const matriz& direita)const;//feito
    bool operator<=(const matriz& direita)const;//feito
    bool operator!=(const matriz& direita)const;//feito

    friend std::ostream& operator<<(std::ostream& out, const matriz& objeto);
    friend std::istream& operator>>(std::istream& in, matriz& objeto);

};

#endif // MATRIZ_H
