#include <stdio.h>
/*6. Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius. 
C = (5 * (F-32) / 9). 
*/

int main(){

int tempF;
int tempC;

printf("Digite a temperatura em Fahrenheit: ");
scanf("%i", &tempF);

tempC = (5 * (tempF-32)/9);

printf("A temperatura em Celcius e %.1i", tempC);
return 0;

}