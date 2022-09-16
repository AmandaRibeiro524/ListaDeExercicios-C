#include <stdio.h>
/*10. Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos). Fórmulas:
tempo em segundos=Tamanho do arquivo / (velocidade de download em megabits / 8)
minutos=segundos*60
*/

int main(){
    float tamArquivo;
    float veloLink;
    float tempMinutos;

printf("Tamanho do arquivo(MB): ");
scanf("%f", &tamArquivo);

printf("Velocidade do link da internet(MBPS): ");
scanf("%f", &veloLink);

tempMinutos = (tamArquivo/(veloLink/8)) * 60;


printf("Tempo aproximado de download (em minutos): %.1f", tempMinutos);
return 0;
}