#include <stdio.h>
// Importiert Modul "<>" Klammern wichtig
int main(){
    // Geht von Klammer bis Klammer unten
    // Jede Zeile endet mit Semicolon ";"
    char name[50];
    int age;
    // Variablen müssen definiert werden nach Dateityp
    printf("Name: "); // Ausgabe
    scanf("%s", &name[0]); // Einlesen 
    // "&" muss angegeben werden als verknüpfung mit Variablen
    printf("Alter: ");
    scanf("%i", &age);

    printf("Hallo, %s! Du bist %i Jahre alt.\n", name, age);

    if( age >= 18){ // Conditions matched
        printf("Du bist volljährig.\n");
    } else { // Conditions not matched
        printf("Du bist minderjährig.\n");
    }

return 0;
//Auf Klammern achten, return 0 -> kein Fehler
}