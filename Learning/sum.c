#include <stdio.h>

float ad1, ad2, erg;
float addition(float a1, float a2){
    erg = a1 + a2;
    return erg;
}
 
void main(){
    printf("Erste Zahl:\n");
    scanf("%f", &ad1);
    printf("Zweite Zahl:\n");
    scanf("%f", &ad2);

    printf("Ergebnis:\n %.1f", addition(ad1, ad2));

}