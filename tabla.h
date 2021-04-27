//
// Created by norbe on 2021. 04. 09..
//

#ifndef UNTITLED1_TABLA_H
#define UNTITLED1_TABLA_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "kartyak.h"

typedef struct{
    int* felhasznalok;
    int felhaszSzama;
}felhasznalok;

typedef struct{
    char* nev;
    int* felhasznalok;
    int counter;
    Kartya * kartyak;
    int kartyaCounter;
}tabla;

felhasznalok createFelhasznalok();
void codeGen(felhasznalok*);
void kiirCode(felhasznalok);
void tablaLetrehozas(int, int*);
void kartyaLetrehozas();
void felhasznaloHozzaadTabla(tabla, int felhasznalo, int counter);
void tablakListazasa(int);
void kiirFelhasznalok(int counter);

tabla * tablak;

#endif //UNTITLED1_TABLA_H
