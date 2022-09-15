#include <stdio.h>
/*7. Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit. 
F = (9 * C + 160) / 5 
*/

int main(){

int tempF;
int tempC;

printf("Digite a temperatura em Celcius: ");
scanf("%i", &tempC);

tempF =(9 * tempC + 160) / 5 ;

printf("A temperatura em Fahrenheit e %.1i F", tempF);
return 0;

}