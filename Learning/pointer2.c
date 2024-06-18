#include <stdio.h>

void test(int feld[], int len);

void main(){
    int feld[10]={1,2,3};
    int *ptr;

    ptr = &feld[1];

    printf("Feld hat %i bytes, ptr hat %i bytes\n", sizeof(feld), sizeof(ptr));

    test(&feld[0], 10);
    test(feld, 10);

}

void test(int feld[], int len){
    printf("Feld hat %i bytes\n", sizeof(feld));

    *feld = 20;
    feld[0] = 30;
    *(feld+1) = 40;
    feld[1] = 50;
}