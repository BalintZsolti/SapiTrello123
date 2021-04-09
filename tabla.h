//
// Created by norbe on 2021. 04. 09..
//

#ifndef UNTITLED1_TABLA_H
#define UNTITLED1_TABLA_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct{
    int* felhasznalok;
    int felhaszSzama;
}felhasznalok;

typedef struct{
    char* nev;
    int* felhasznalok;
}tabla;

int codeGen(felhasznalok);

#endif //UNTITLED1_TABLA_H
