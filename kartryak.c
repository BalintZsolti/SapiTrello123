//
// Created by norbe on 2021. 04. 27..
//

#include "kartyak.h"
#include "tabla.h"

void kartyaLetrehozas(){
    tablak[0].kartyaCounter++;
    tablak->kartyak = (Kartya*) realloc(tablak->kartyak, tablak->kartyaCounter);
    tablak->kartyak[tablak->kartyaCounter-1].status = "TO DO";
    printf("Adja meg a kartya cimet:");
    scanf("%[^\n]%*c", tablak->kartyak[tablak->kartyaCounter-1].cim);
    printf("Adja meg a kartya leirasat:");
    scanf("%[^\n]%*c", tablak->kartyak[tablak->kartyaCounter-1].leiras);
}

