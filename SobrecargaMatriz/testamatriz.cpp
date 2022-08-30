#include "testamatriz.h"
#include <QString>

void testaMatriz::menu() const{

    matriz matrizA, matrizB;

    int funcao;

    QString iguais, diferentes;

    std::cout << "insira o numero de linhas e de colunas da matrizB : \n";
    std::cin >> matrizA;

    std::cout << "\ninsira o numero de linhas e de colunas da matrizB : \n";
    std::cin >> matrizB;

    //std::cout << matrizB;


    if (matrizA==matrizB){
        iguais = "sim\n";
    }
    else {
        iguais = "nao\n";
    }
    if (matrizA!=matrizB){
        diferentes = "sim\n";
    }
    else {
        diferentes = "nao\n";
    }

    std::cout << "matrizA igual matrizB? - " << iguais.toStdString();
    std::cout << "matrizA e matrizB sao diferentes? - " << diferentes.toStdString();

    std::cout << "\nMatrizA :\n" << matrizA;
    std::cout << "\nMatrizB :\n" << matrizB;

    std::cout << "\n\n1-Soma \n2-SubtracaoAporB \n3-SubtracaoBporA \n4-Multiplicacao \n";
    std::cin >> funcao;

    while (funcao > 0 && funcao){

        matriz *resultado = new matriz;

        switch (funcao){
        case 1:
            if (iguais == "nao\n"){
                std::cout << "\nA soma nao pode ser feita\n";
                delete resultado;
                break;
            }
            else{
                *resultado = matrizA+matrizB;
                std::cout << "Resultado: \n\n" << *resultado;
                delete resultado;
                break;
            }

        case 2:
            if (iguais == "nao\n"){
                std::cout << "\nA subtracao nao pode ser feita\n";
                delete resultado;
                break;
            }
            else{
                *resultado = matrizA-matrizB;
                std::cout << "Resultado: \n\n" << *resultado;
                delete resultado;
                break;
            }

        case 3:
            if (iguais == "nao\n"){
                std::cout << "\nA subtracao nao pode ser feita\n";
                delete resultado;
                break;
            }
            else {
                *resultado = matrizB-matrizA;
                std::cout << "Resultado: \n\n" << *resultado;
                delete resultado;
                break;
            }

        case 4:
            if (matrizA.getC() != matrizB.getL()){
                std::cout << "\nMatrizes incompativeis\n";
                delete resultado;
                break;
            }
            else{
                *resultado = matrizA*matrizB;
                std::cout << "Resultado: \n\n" << *resultado;
                delete resultado;
                break;
            }

        }
        std::cout << "\n\n1-Soma \n2-SubtracaoAporB \n3-SubtracaoBporA \n4-Multiplicacao \n";
        std::cin >> funcao;

    }

}
