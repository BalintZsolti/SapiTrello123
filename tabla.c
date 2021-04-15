//
// Created by norbe on 2021. 04. 09..
//

#include "tabla.h"

tabla * tablak;

void codeGen(felhasznalok* felhasz){
    srand(time(0));
    int n = rand();
    for(int i = 0; i < (*felhasz).felhaszSzama; i++){
        if(n == (*felhasz).felhasznalok[i]){
            n = rand();
            i = 0;
        }
    }
    (*felhasz).felhaszSzama++;
    (*felhasz).felhasznalok = (int*)realloc((*felhasz).felhasznalok, (*felhasz).felhaszSzama);
    (*felhasz).felhasznalok[(*felhasz).felhaszSzama-1] = n;
    printf("Az on egyedi kodja: %d\n", n);
    return;
}

void kiirCode(felhasznalok felhasz){
    for(int i = 0; i < felhasz.felhaszSzama; i++){
        printf("%d\n", felhasz.felhasznalok[i]);
    }
}

void tablaLetrehozas(){
    freopen("CON", "rt", stdin);
    static int tablaCounter = 0;
    tablaCounter ++;
    tablak = (tabla*) realloc (tablak, sizeof(tablaCounter));
    printf("Adja meg a tabla cimet: ");
    scanf("%[^\n]%*c", tablak->nev);
    printf("A tabla sikeresen letrehozva.");
}