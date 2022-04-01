#include <stdio.h>


enum tags
{
    Arte,
    Farandula,
    Ciencia,
    Politica,
    Sucesos,
    Nada
};

struct Spub
{
    enum tags Categoria = Nada;
    char *contenido[100];
};

struct SC
{

};

struct Ssus
{
    struct Spub publiHist[10];
};




void main()
{
    /// se necesitan 3 pipes
    int fpubSC[2];/// uno para conectar publicaciones y el SC
    int fSCsus[2];/// otro para el SC con los sucriptores
    int fsusSC[2];///y un ultimo que actue como una segunda via que vaya de suscriptores hasta el SC


}




