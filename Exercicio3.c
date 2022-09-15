#include <stdio.h>
/*3. Faça um Programa que peça o raio de um círculo, calcule e mostre sua área. */
int main(){

    float diametro;
    float raio;

    printf("Diametro do circulo em cm: ");
    scanf("%f", &diametro);

    raio=diametro/2;
    printf("O raio do circulo e %.1f cm", raio);
    return 0;
}