#include <stdio.h>
/*2. Faça um Programa que converta metros para centímetros. */
int main(){

    float metros;
    float centimetros;

    printf("Metros: ");
    scanf("%f", &metros);

    centimetros=metros*100;
    printf("%.1f cm", centimetros);
    return 0;
}