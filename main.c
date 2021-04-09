#include "tabla.h"

int main() {
    int x;
    felhasznalok felhasznalok;
    felhasznalok.felhaszSzama = 0;
    felhasznalok.felhasznalok = (int*) malloc (0*sizeof(int));
    printf("Ha van kodja, nyomja meg az 1-es gombot.\n");
    printf("Amennyiben nincs, nyomja meg a 2-es gombot\n");
    scanf("%d", &x);
    switch(x){
        case 1:
            break;
        case 2:
        {
            printf("%d", codeGen(felhasznalok));
        }
    }
    return 0;
}

