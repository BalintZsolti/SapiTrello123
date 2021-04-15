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

typedef struct{
    char * cim;
    char * leiras;
}Kartya;

typedef struct{
    int* felhasznalok;
    int felhaszSzama;
}felhasznalok;

typedef struct{
    char* nev;
    int* felhasznalok;
    Kartya * kartyak;
}tabla;

void codeGen(felhasznalok*);
void kiirCode(felhasznalok);
void tablaLetrehozas();
void kartyaLetrehozas();
void tablakListazasa();

tabla * tablak;

#endif //UNTITLED1_TABLA_H
