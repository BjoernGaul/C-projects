#include <stdio.h>
#include <string.h>

void stringToLower(char *s1);
char str[] = "Dies ist ein langer TEXT";

void main(){
    printf("Before: %s\n", str);
    stringToLower(str);
    printf("After: %s\n", str);
}

void stringToLower(char *s1){ //Zeiger auf Array, Abschluss mit \0
    for(int i=0; s1[i] != '\0'; i++ ){
        if(s1[i] >= 'A' && s1[i] <= 'Z'){
            s1[i] = s1[i] + 32; //s1[i] = s1[i] + ('a'-'A')
        }
    }
}