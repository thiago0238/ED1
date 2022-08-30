#include "manipulaarquivos.h"

using namespace std;

ManipulaArquivos::ManipulaArquivos()
{   
}

void ManipulaArquivos::inserirLinha(string nome, string texto, int pos){
    ifstream arquivoLeitura;
    ofstream arquivoEscrita;
    string linhas;
    afa::LLDE<string> listaAux;

    arquivoLeitura.open(nome, ios::in);

    if (!arquivoLeitura.is_open()){
        throw string ("Tem coisa errada no arquivo irmão!");

    }

    while(arquivoLeitura.good()){
        getline (arquivoLeitura, linhas);
        listaAux.inserirFim(linhas);
    }
    arquivoLeitura.close();

    listaAux.inserirPos(pos, texto);

    arquivoEscrita.open("apos-inserir-"+nome, ios::out | ios::app);
    if (!arquivoEscrita.is_open()){
        throw string ("Tem coisa errada no arquivo irmão!");

    }

    while(listaAux.getQuantidadeElementos()!=0){
        arquivoEscrita << listaAux.retirarInicio() << "\n";
    }
    arquivoEscrita.close();

}

void ManipulaArquivos::CriarArquivoOUinserir(string texto, string nome){

    ofstream arquivoEscrita;

    arquivoEscrita.open(nome, ios::out | ios::app);
    if (!arquivoEscrita.is_open()){
        throw string ("Tem coisa errada no arquivo irmão!");

    }

    arquivoEscrita << texto << "\n";
    arquivoEscrita.close();

}

string ManipulaArquivos::acessarArquivo(string nome){

    ifstream arquivoLeitura;
    string linhas, texto;

    texto = "";

    arquivoLeitura.open(nome, ios::in);
    if (!arquivoLeitura.is_open()){
        throw string ("Esse arquivo nao existe");

    }

    while(arquivoLeitura.good()){
        getline (arquivoLeitura, linhas);
        texto += linhas + "\n";
    }
    arquivoLeitura.close();

    return texto;

}
