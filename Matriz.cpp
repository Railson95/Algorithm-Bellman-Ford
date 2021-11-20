#include "Matriz.h"
#include "Aresta.h"
#include <fstream>
#include <iostream>
#include <cfloat>
//#include <limits>

using namespace std;
Matriz::Matriz(const int &aux) {
    m = new Grafo*[aux];
    for (int i = 0; i < aux; ++i)
        m[i] = new Grafo[aux];
}

void Matriz::preencheMatrizComZero(int n) {
    Aresta a;
    Vertice v;
    v.setEstimativa(0);
    a.setPeso(0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            m[i][j].setAresta(a);
            m[i][j].setVertice(v);
        }
    }
}

void Matriz::inicializaParametros(int n, int origem) {
    Vertice v, v2;
    v2.setEstimativa(0);
    v.setEstimativa(200);
    v.setPai(false);
    int cont = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            m[i][j].setVertice(v);
            m[i][j].setVertice1(v);
        }
    }
    while(cont < n) {
        m[cont][origem].setVertice(v2);
        cont++;
    }
}

void Matriz::preencheMatriz(int origem, int destino, double custo) {
    Aresta a;
    a.setPeso(custo);
    m[origem][destino].setAresta(a);
}

void Matriz::Relaxamento(int i, int j, int n) {
    Vertice v;
    int cont = 0;
    if (m[i][j].getVertice().getEstimativa() > m[i][i].getVertice().getEstimativa() + m[i][j].getAresta().getPeso()) {
        while (cont < n) {
            v.setPai(false);
            m[cont][j].setVertice1(v);
            cont ++;
        }
        v.setPai(true);
        m[i][j].setVertice1(v);
        double soma = 0;
        soma = m[i][i].getVertice().getEstimativa() + m[i][j].getAresta().getPeso();
        for(int valAux = 0; valAux < n; valAux++) {
            v.setEstimativa(soma);
            m[valAux][j].setVertice(v);
        }
    }
}

bool Matriz::AlgoritmoBF(int n, int terceiroParametroOrigem) {
    bool valAux = true;
    int origem = terceiroParametroOrigem;
    inicializaParametros(n, origem);
    int cont = 0;
    while (cont < n-1) {
        if(cont != 0) {
            origem = 0;
        }
        for(int i = origem; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if (m[i][j].getAresta().getPeso() != 0) {
                    Relaxamento(i, j, n);
                }
            }
        }
        cont ++;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (m[i][j].getAresta().getPeso() !=0 && m[i][j].getVertice().getEstimativa() > m[i][i].getVertice().getEstimativa() + m[i][j].getAresta().getPeso()) {
                valAux = false;
            }
        }
    }
    return valAux;
}

void Matriz::mostraCaminho(int vetorCaminho[], double vetorCusto[], int n) {
    int valFixa = n, valControle = n-1, coluna = 0, linha = 0;
    double **matrizAux;
    matrizAux = new double*[n];
    for (int i = 0; i < n; ++i)
        matrizAux[i] = new double[n];

    while(valControle >= 1 ) {
        while(coluna <= valFixa - valControle) {
            matrizAux[linha][coluna] = vetorCaminho[coluna];
            coluna ++;
        }
        matrizAux[linha][coluna] = vetorCusto[linha];
        linha ++;
        valControle--;
        coluna = 0;
    }

    valFixa = n;
    valControle = n-2;
    coluna = 0;
    linha = 0;

    while(valControle >= 0 ) {
        while(coluna < valFixa - valControle) {
            cout << matrizAux[linha][coluna] << " -> ";
            coluna ++;
            if(coluna == valFixa - valControle) {
                cout << "( " << matrizAux[linha][coluna] << " )" << endl;
            }

        }
        cout << endl;
        linha ++;
        valControle--;
        coluna = 0;
    }
}

void Matriz::verificaCaminhoRealizado(int n, int terceiroParametroOrigem) {
    int *vetorCaminho = new int[n];
    for(int i = 0; i < n; i++) {
        vetorCaminho[i] = -1;
    }

    double *vetorCusto = new double[n-1];

    int origem = terceiroParametroOrigem;
    int coluna = 0, contador = 1, contadorAux = 0;
    vetorCaminho[0] = origem;
    while(coluna < n) {
        if(m[origem][coluna].getVertice1().getPai() == true) {
            vetorCusto[contadorAux] = m[origem][coluna].getVertice().getEstimativa();
            origem = coluna;
            vetorCaminho[contador] = origem;
            coluna = 0;
            contadorAux++;
            contador ++;
        } else {
            coluna ++;
        }
    }
    mostraCaminho(vetorCaminho, vetorCusto, n);
}
