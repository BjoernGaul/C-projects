#include <stdio.h>

int main() {
    //Variablen Tauschen
    int a=12,b=13,tmp;
    printf("a: %i, b: %i\n", a, b );
    tmp=a; a=b; b=tmp;
    printf("a: %i, b: %i\n", a, b);

    //Grösse der Speicher ausgeben
    int intT;
    float floatT;
    double doubleT;
    char charT;
    
    printf("Size of int: %zu bytes\n", sizeof(intT));
    printf("Size of float: %zu bytes\n", sizeof(floatT));
    printf("Size of double: %zu bytes\n", sizeof(doubleT));
    printf("Size of char: %zu bytes\n", sizeof(charT));

    //Speicher, Adresse ausgeben
    intT = 12;
    printf("intT: %i, Adresse: %p, Speicher: %i Byte\n", intT, &intT, sizeof(intT));
    floatT = 8;
    printf("floatT: %.2f, Adresse: %p, Speicher: %i Byte\n", floatT, &floatT, sizeof(floatT));
    doubleT = 3.4;
    printf("doubleT: %.2lf, Adresse: %p, Speicher: %i Byte\n", doubleT, &doubleT, sizeof(doubleT));
    charT = 'a';
    printf("charT: %c, Adresse: %p, Speicher: %i Byte\n", charT, &charT, sizeof(charT));
    
    //ascii tabelle
    for(int i = 0; i<130; i++){
        printf("%i: %c", i, i);
        if(i % 5 == 0){
            printf("\n");
        }else{
            printf("|");
        }
    }

    //for Schleife Nummern zählen und Durchschnitt berechnen
    int num, count, sum=0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    for(count=1; count<=num; ++count){
        sum += count;
    }
    
    printf("Sum = %d\n", sum);
    printf("Durchschnitt = %.2f\n", (float)sum/num);

    //While loop
    int i=0;
    while(i<=20){
        printf("i=%d\n", i);
        i += 5;
    }

    //do-while loop
    double number, sum;
    do{
        printf("Enter your number: (0 to end)\n");
        scanf("%lf", &number);
        sum += number;
    }while(number != 0.0);
    
    printf("Sum =%.2lf", sum);
    
    return 0;
}