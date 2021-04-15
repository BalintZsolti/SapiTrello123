#include "tabla.h"

int main() {
    int x;
    bool helyesKod = false;
    int jelenlegiFelhasznalo;
    felhasznalok felhasznalok;
    felhasznalok.felhaszSzama = 0;
    felhasznalok.felhasznalok = (int*) malloc (0*sizeof(int));
    while(1) {
        printf("Ha van kodja, nyomja meg az 1-es gombot.\n");
        printf("Amennyiben nincs, nyomja meg a 2-es gombot\n");
//        printf("Ha ki akarja iratni a felhasznalokat, nyomja meg a 3-as gombot\n");
        scanf("%d", &x);
        switch (x) {
            case 1: {
                int code;
                bool ok = 0;
                printf("Kerem irja be a kodot:");
                scanf("%d", &code);
                for (int i = 0; i < felhasznalok.felhaszSzama; i++) {
                    if (felhasznalok.felhasznalok[i] == code) {
                        ok = 1;
                        jelenlegiFelhasznalo = code;
                        break;
                    }
                }
                if(ok == 1){
                    printf("A kod helyes\n");
                    helyesKod = true;
                }
                else{
                    printf("A kod helytelen, kerem csinaljon uj kodot\n");
                }
                break;
            }

            case 2: {
                codeGen(&felhasznalok);
                jelenlegiFelhasznalo = felhasznalok.felhasznalok[felhasznalok.felhaszSzama-1];
                break;
            }
//            case 3:{
//                kiirCode(felhasznalok);
//                break;
//            }
        }
//        printf("%d", jelenlegiFelhasznalo);
        printf("\n");
        if(!helyesKod){
            continue;
        }
        while(1){
            printf("Tabla letrehozasahoz nyomja meg az 1-es gombot: ");
            scanf("%d", &x);
            switch (x){
                case 1:{
                    tablaLetrehozas();
                    break;
                }
             }
        }
    }
    return 0;
}

