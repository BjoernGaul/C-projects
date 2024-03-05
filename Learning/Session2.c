#include  <stdio.h>
int main() {

    int i;
    // 
    for(i=0; i<33; i++) {
        printf("*");
    }

    printf("\n* 1. Text ausgeben (ctrl-v)     *\n");
    printf("* 2. Text ausschneiden (ctrl-x) *\n");
    printf("* 3. Text kopieren (ctrl-c)     *\n");

    for(i=0; i<33; i++) {
        printf("*");
    }


    char myChar = 'a';
    printf("%c\n", myChar);

    int radius;
    printf("Gebe den Radius deines Kreises an.");
    scanf("%d",&radius);

    printf("Hier ist dein Kreis\n");
    printf("Radius ist %d\n", radius);
    printf("Durchmesser ist %d\n", radius * 2);
    printf("Fläche ist %.1f\n", radius*radius * 3.14);

    return 0;
    
}