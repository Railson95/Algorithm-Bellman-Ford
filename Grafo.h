#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#include "Vertice.h"
#include "Aresta.h"

class Grafo
{
    public:
        Grafo();
        void setVertice(Vertice v);
        Vertice getVertice();
        void setVertice1(Vertice pai);
        Vertice getVertice1();
        void setAresta(Aresta a);
        Aresta getAresta();
    protected:

    private:
        Aresta a;
        Vertice v;

};

#endif // GRAFO_H_INCLUDED
