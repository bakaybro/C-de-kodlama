#include <stdio.h>
int main() {
    char operator;
    double n1, n2;
    printf("bir operator giriniz: (+, -, *, /): ");   scanf("%c", &operator);
    printf("2 sayi giriniz: "); scanf("%lf %lf",&n1, &n2);
    switch(operator)
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
        // operator  +, -, *, /  biri de?ilse
        default:
            printf("Hata! operator dogru degil");
    }
    return 0;
}

