#ifndef MANIPULAARQUIVOS_H
#define MANIPULAARQUIVOS_H
#include "llde.h"
#include <fstream>

using namespace std;

class ManipulaArquivos
{
public:
    ManipulaArquivos();

    void CriarArquivoOUinserir(string texto, string nome);
    string acessarArquivo(string nome);
    void inserirLinha(string nome, string texto, int pos);

};

#endif // MANIPULAARQUIVOS_H
