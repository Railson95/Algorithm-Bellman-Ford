#include "Grafo.h"

Grafo::Grafo()
{
    //ctor

}

void Grafo::setAresta(Aresta x)
{
    this->a.setPeso(x.getPeso());
}

Aresta Grafo::getAresta()
{
    return a;
}

void Grafo::setVertice(Vertice x)
{
    this->v.setEstimativa(x.getEstimativa());
}

Vertice Grafo::getVertice()
{
    return v;
}

void Grafo::setVertice1(Vertice pai)
{
    this->v.setPai(pai.getPai());
}

Vertice Grafo::getVertice1()
{
    return v;
}
