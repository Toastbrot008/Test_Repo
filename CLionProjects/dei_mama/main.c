#include "stdlib.h"
#include "stdio.h"

struct schi{
    char marke[20];
    int abmessungen[3];
};
typedef struct schi Ski;
struct Schifaher{
    char name[20];
    int geschwindigkeit;
    Ski Schi;
};
typedef struct Schifaher fahrer;
void eingabe(fahrer *f);
int main(){
    fahrer Bauer, Steindl;


    return 0;
}
void eingabe(fahrer *f){
    printf("Name: ");
    scanf("%s", f->name);
    printf("Marke: ");
    scanf("%s", f->Schi.marke);
    printf("Länge: ");
    scanf("%d", &f->Schi.abmessungen[0]);
    printf("Breite: ");
    scanf("%d", &f->Schi.abmessungen[1]);
    printf("Höhe: ");
    scanf("%d", &f->Schi.abmessungen[2]);
}