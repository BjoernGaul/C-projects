#include <stdio.h>

int fac1, fac2, erg;
int prod(int f1, int f2){
    erg = f1*f2;
    return erg;
}

int main(){
    printf("Erster Faktor:\n");
    scanf("%d", &fac1);
    printf("Zweiter Faktor:\n");
    scanf("%d", &fac2);

    printf("Ergebnis:\n%d", prod(fac1, fac2));
    
    getchar;
    getchar;


    return 0;
}