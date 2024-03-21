#include <stdio.h>

float meter, cm;
float mtocm(float m){
    cm = m*100;
    return cm;
}

int main() {
    printf("Metereingabe:\n");
    scanf("%f", &meter);

    printf("%.1f", mtocm(meter));

    return 0;
}