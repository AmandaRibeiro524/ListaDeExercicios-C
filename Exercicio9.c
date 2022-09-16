#include <stdio.h>

/*9. Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) – 58*/

int main(){
    float altura;
    float pesoIdeal;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    pesoIdeal = (72.7*altura) - 58;

    printf("Peso ideal= %.1f", pesoIdeal);
    return 0;
}
