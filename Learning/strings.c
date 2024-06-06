#include <stdio.h>

void main(){
    char myString[] = "Programming is fun";
    int i;

    for(i=0; myString[i] != '\0'; i++);
    printf("Lenght of string: %d\n", i);
    printf("%s\n", myString);
    
    for(i=0; myString[i] != 'i'; i++);
    printf("i ist and Stelle: %d\n", i+1);

    myString[9] ='\0';
    printf("%s\n", myString);
}

