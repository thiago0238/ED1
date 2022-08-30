#include "matriz.h"
#include <QString>

matriz::matriz():
    l(0),
    c(0),
    mat (nullptr)
{
}
matriz::~matriz(){

    if (mat) {
        for (int i = 0; i < l; i++){
            delete [] mat[i];
        }
        delete [] mat;
    }
}

bool matriz::setMatriz(int aC, int aL){
    if (aL > 1 && aC > 0){

        l = aL;
        c = aC;

        mat = new double*[l];
        for (int i = 0; i < l; i++){
            mat[i] = new double [c];
        }


        return true;
    }
    else {
        return false;
    }
}

std::istream& operator>>(std::istream& in, matriz& objeto){

    int linhas, colunas;

    in >> linhas >> colunas;

    while(!objeto.setMatriz(linhas, colunas)){
        std::cout << "Numeros invalidos, insira novamente: \n";
        in >> linhas >> colunas;
    }

    for (int i = 0; i < objeto.l; i++){
        for (int j = 0; j < objeto.c; j++){
            std::cout << "insira o elemento: ";
             in >> objeto.mat[i][j];
        }
    }

    return in;

}
std::ostream& operator<<(std::ostream& out, const matriz& objeto){

    for (int pos = 0; pos < objeto.l; pos++){
        for (int posi = 0; posi < objeto.c; posi++){
            out << objeto.mat[pos][posi] << " ";
        }
        out << "\n";

    }
    return out;
}
matriz& matriz::operator+(const matriz &direita){

    matriz *soma = new matriz;

    soma->setMatriz(this->l, this->c);

    for (int pos = 0; pos < this->l; pos++){
        for (int posi = 0; posi < this->c; posi++){
            soma->mat[pos][posi] = this->mat[pos][posi] + direita.mat[pos][posi];
        }
    }
   return *soma;
}
matriz& matriz::operator-(const matriz &direita){

    matriz *subtracao = new matriz;

    subtracao->setMatriz(this->l, this->c);

    for (int pos = 0; pos < this->l; pos++){
        for (int posi = 0; posi < this->c; posi++){
            subtracao->mat[pos][posi] = this->mat[pos][posi] - direita.mat[pos][posi];
        }
    }
   return *subtracao;
}
matriz& matriz::operator*(const matriz &direita){


    matriz *multiplicacao = new matriz;

    multiplicacao->setMatriz(this->l, direita.c);

    int valoraux = 0;

    for (int linhaA = 0; linhaA < this->l; linhaA++){
        for(int colunaB = 0; colunaB < direita.c; colunaB++){
            for(int colunaA = 0; colunaA < this->c; colunaA++){
             int valor = this->mat[linhaA][colunaA] * direita.mat[colunaA][colunaB];
             valoraux += valor;

            }
            multiplicacao->mat[linhaA][colunaB] = valoraux;
            valoraux = 0;
        }

    }

    return *multiplicacao;

}
bool matriz::operator==(const matriz &direita) const {

    int aux = 0;

    if (this->l == direita.l && this->c == direita.c){
        for (int pos = 0; pos < l; pos++){
            for (int posi = 0; posi < c; posi++){
                if (this->mat[pos][posi] != direita.mat[pos][posi]){
                    aux++;
                }
            }
        }
        if (aux == 0){
            return true;
        }
        else return false;
    }
    else return false;

}
bool matriz::operator!=(const matriz &direita) const {

    int aux = 0;

    if (this->l == direita.l && this->c == direita.c){
        for (int pos = 0; pos < l; pos++){
            for (int posi = 0; posi < c; posi++){
                if (this->mat[pos][posi] != direita.mat[pos][posi]){
                    aux++;
                }
            }
        }
        if (aux == 0){
            return false;
        }
        else return true;
    }
    else return true;

}

int matriz::getL() const{
    return l;
}
int matriz::getC() const{
    return c;
}
