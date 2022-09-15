#include <stdio.h>

/*4. Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário. */
int main(){

    float lado;
    float area;
    float novaArea;

    printf("Digite o valor do lado em cm: ");
    scanf("%f", &lado);

    area=lado*lado;
    novaArea=area*2;

    printf("%.1f cm", novaArea);
    return 0;
}