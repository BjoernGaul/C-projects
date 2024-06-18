#include <stdio.h>

void swap(int *a, int *b);
void addsup(int z1, int z2, int *sum, int *diff);

int main(){
    int a = 10;
    int b = 20;
    int add, diff;

    printf("a: %i, b: %i\n", a, b);
    swap(&a, &b);
    printf("a: %i, b: %i\n", a, b);

    addsup(a, b, &add, &diff);
    printf("add: %i, diff: %i\n", add, diff);

    return 0;
}

void swap(int *a, int *b){
    *a = *a ^ *b; // XOR swap algorithm example: 
    *b = *a ^ *b; // a = 10, b = 20 -> a = 10 ^ 20 = 30, b = 20 -> a = 30 ^ 20 = 10, b = 20 -> a = 30 ^ 10 = 20, b = 10
    *a = *a ^ *b; 
    /*
    Standart swap algorithm example:
    int temp = *a;
    *a = *b;
    *b = temp;
    */
}

void addsup(int z1, int z2, int *sum, int *diff){
    *sum = z1 + z2;
    *diff = z1 - z2;
}