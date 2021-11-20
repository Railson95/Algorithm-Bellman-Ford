#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Matriz.h"
using namespace std;

int main(int argc, char** arqv) {
    int n, origem, destino, terceiroParametroOrigem;
    double custo;

    string st = arqv[2];

    stringstream s(st);
    s >> terceiroParametroOrigem;

    fstream arquivo;
    arquivo.open(arqv[1]);
    arquivo>>n;
    Matriz m(n);
    m.preencheMatrizComZero(n);
    do {
        arquivo >> origem;
        arquivo >> destino;
        arquivo >> custo;
        m.preencheMatriz(origem, destino, custo);
    } while(!arquivo.eof()&&arquivo.good());

    cout << endl;
    cout << "Iniciando Algoritmo BF!!! " << endl;
    if(m.AlgoritmoBF(n, terceiroParametroOrigem)==false) {
        cerr << "Grafo pessui ciclo negativo, por isso houve um erro em: " << arqv[1] <<endl;
    } else {
        cout << "Caminho feito " << endl;
        m.verificaCaminhoRealizado(n, terceiroParametroOrigem);
    }
    return 0;
}
