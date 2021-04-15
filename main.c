#include "tabla.h"

int main() {
    int x;
    bool tovabblepes = false;
    int jelenlegiFelhasznalo;
    felhasznalok felhasznalok;
    felhasznalok = createFelhasznalok();
    int tablacounter = 0;

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
                    tovabblepes = true;
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
        if(!tovabblepes){
            continue;
        }
        while(1){
            printf("\nTabla letrehozasahoz nyomja meg az 1-es gombot.\n");
            printf("Felhasznalo hozzaadasahoz nyomja meg a 2-es gombot\n");
            printf("Uj felhasznalo generalasahoz nyomja meg a 3-es gombot.\n");
            printf("A felhasznalok kiirasahoz nyomja meg a 4-es gombot.\n");
            printf("Kartya hozzaadasahoz nyomja meg az 5-os gombot\n");
            scanf("%d", &x);
            switch (x){
                case 1:{
                    tablaLetrehozas(jelenlegiFelhasznalo, &tablacounter);
                    break;
                }
                case 2:{
                    int temp;
                    printf("Adja meg a felvenni kivant szemely kodjat.");
                    scanf("%d", &temp);
                    felhasznaloHozzaadTabla(felhasznalok, temp);
                    break;
                }
                case 3:{
                    tovabblepes = false;
                    break;
                }
                case 4:{
                    kiirFelhasznalok();
                }
             }
             if(!tovabblepes){
                 break;
             }
        }
    }
    return 0;
}

