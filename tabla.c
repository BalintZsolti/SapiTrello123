//
// Created by norbe on 2021. 04. 09..
//

#include "tabla.h"

tabla * tablak;

felhasznalok createFelhasznalok(){
    felhasznalok felhasznalok;
    felhasznalok.felhaszSzama = 0;
    felhasznalok.felhasznalok = (int*) malloc (0*sizeof(int));
    return felhasznalok;
}

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

void tablaLetrehozas(int user,int * counter){
    freopen("CON", "rt", stdin);
    (*counter)++;
    tablak = (tabla*) realloc (tablak, sizeof((*counter)));
    printf("Adja meg a tabla cimet: ");
    scanf("%[^\n]%*c", tablak->nev);
    tablak->counter = 1;
    tablak->felhasznalok = (int*) malloc (1*sizeof(int));
    tablak->felhasznalok[0] = user;
    tablak[0].kartyaCounter = 0;
    printf("A tabla sikeresen letrehozva.");
}

void felhasznaloHozzaadTabla(tabla x, int felhasznalo, int counter){
    if(counter == 0){
        printf("Meg nincs tabla letrehozva.");
        return;
    }
    bool ok = true;
    for(int i = 0; i < x.counter; i++){
        if(x.felhasznalok[i] == felhasznalo){
            ok = false;
        }
    }
    if(!ok){
        printf("A felhasznalo mar hozza van adva a tablahoz.\n");
        return;
    }
    tablak->counter++;
    tablak->felhasznalok = (int*) realloc (tablak->felhasznalok,sizeof(tablak->counter));
    tablak->felhasznalok[tablak->counter-1] = felhasznalo;
    printf("Felhasznalo sikeresen hozzaadva!\n");
}

void kiirFelhasznalok(int counter){
    if(counter == 0){
        printf("Meg nincs tabla letrehozva\n");
        return;
    }
    for(int i = 0; i < tablak->counter; i++){
        printf("%d ", tablak->felhasznalok[i]);
    }
}