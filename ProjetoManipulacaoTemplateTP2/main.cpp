#include <QCoreApplication>
#include <manipulaarquivos.h>
#include <iostream>
#include <string>
#include <QString>

int main()
{

    try {
        cout << "1-Para criar arquivo, ou inserir no final de um existente (linha por linha): \n2-Para inserir em linha especifica (sera gerado um novo arquivo com o nome apos-inserir-*nomedoarquivo*): \n3-Para acessar um arquivo existente: \n";
        int numero;

        while (cout << "\nEscolha: " && cin >> numero && numero > 0 && numero < 4){
            switch (numero) {
                case 1:{
                    string nome, texto;
                    ManipulaArquivos objeto;

                    cout << "Insira o nome do arquivo: ";
                    cin >> nome;

                    cout << "Insira o texto a ser adicionado: ";
                    while(getline(cin, texto))
                       if(texto != ""){
                              break;
                        }

                    objeto.CriarArquivoOUinserir(texto, nome+".txt");

                    break;
            }

                case 2:{

                ManipulaArquivos objeto;
                string nome, texto;
                int pos;

                cout << "Insira o nome do arquivo (sem .txt): ";
                cin >> nome;

                cout << "Insira a linha desejada: ";
                cin >> pos;

                cout << "Insira o texto a ser adicionado: ";
                while(getline(cin, texto))
                   if(texto != ""){
                          break;
                    }

                objeto.inserirLinha(nome+".txt",texto,pos-1);

                break;
            }
            case 3:{

                ManipulaArquivos objeto;
                string nome;

                cout << "Insira o nome do arquivo a ser acessado (sem .txt): ";
                cin >> nome;

                cout << "\nNo arquivo: \n" << objeto.acessarArquivo(nome+".txt");

                break;
            }


            }
            cout << "\n1-Para criar arquivo, ou inserir no final de um existente (linha por linha): \n2-Para inserir em linha especifica (sera gerado um novo arquivo com o nome apos-inserir-*nomedoarquivo*): \n3-Para acessar um arquivo existente: \n";

        }
    }    catch (std::string &erro) {

        cout << endl << "ERRO NO ARQUIVO: "<< erro << endl;
    }



}
