//switch case
#include <stdio.h>

int main(){
        char operation;
    double n1, n2;

    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
            
        case '%':
            printf("Bei Modulo werden Kommazahlen abgeschnitten!\n");
            int d1 = n1, d2 = n2;
            printf("%d %% %d = %d", d1, d2, d1%d2);
            break;
        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}