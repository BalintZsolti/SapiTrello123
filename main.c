#include "tabla.h"

int main() {
    int x;
    bool tovabblepes = false;
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
            printf("Uj felhasznalo generalasahoz nyomja meg a 2-es gombot.\n");
            scanf("%d", &x);
            switch (x){
                case 1:{
                    tablaLetrehozas();
                    break;
                }
                case 2:{
                    tovabblepes = false;
                }
             }
             if(!tovabblepes){
                 break;
             }
        }
    }
    return 0;
}

