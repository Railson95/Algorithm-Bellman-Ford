#include "Vertice.h"

Vertice::Vertice()
{
    //ctor
}

void Vertice::setEstimativa(double estimativa)
{
    this->estimativa = estimativa;
}

double Vertice::getEstimativa()
{
    return estimativa;
}

void Vertice::setPai(bool pai)
{
    this->pai = pai;
}

bool Vertice::getPai()
{
    return pai;
}
