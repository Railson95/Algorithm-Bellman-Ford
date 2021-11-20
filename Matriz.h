#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED

#include "Grafo.h"
#include <fstream>

class Matriz
{
    public:
        Matriz ();
        Matriz(const int &aux);
        void preencheMatrizComZero(int n);
        void inicializaParametros(int n, int origem);
        void preencheMatriz(int origem, int destino, double custo);
        void Relaxamento(int i, int j, int n);
        bool AlgoritmoBF(int n, int terceiroParametroOrigem);
        void mostraCaminho(int vet1[], double vet2[], int n);
        void verificaCaminhoRealizado(int n, int terceiroParametroOrigem);

    protected:

    private:
        Grafo **m;
};

#endif // MATRIZ_H_INCLUDED
