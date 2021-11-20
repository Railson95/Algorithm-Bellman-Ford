#ifndef VERTICE_H_INCLUDED
#define VERTICE_H_INCLUDED

class Vertice
{
    public:
        Vertice();
        void setEstimativa(double estimativa);
        double getEstimativa();
        void setPai(bool pai);
        bool getPai();

    protected:

    private:
        double estimativa;
        bool pai;
};

#endif // VERTICE_H_INCLUDED
