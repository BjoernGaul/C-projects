#include <stdio.h>

void kreis(int radius, double *umfang, double *flaeche){
    *umfang = 2 * 3.14159265359 * radius;
    *flaeche = 3.14159265359 * radius * radius;
}
double umfang, flaeche = 0;

void main(){
    for(int i=0; i<10; i++){
        kreis(i, &umfang, &flaeche);
        printf("Radius: %i, Umfang: %lf, Flaeche: %lf\n", i, umfang, flaeche);
    }
}