#include <stdio.h>


enum tags
{
    ciencia,
    tecnologia,
    politica,
    deportes,
    otros
};



struct Ssus
{
    enum tags *listaTags[5];
    int consecutivo=0;
};

void añadirTag(struct Ssus s, enum tags nuevo){
    s->listaTags[s->consecutivo] = nuevo;
}

struct Spub
{
};
struct SC
{
};


void main()
{
    struct Ssus suscr;

}




