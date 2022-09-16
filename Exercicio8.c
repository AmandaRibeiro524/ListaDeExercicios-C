 #include <stdio.h>
 #include <math.h>
/*8. Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: 
o	o produto do dobro do primeiro com metade do segundo. 
o	a soma do triplo do primeiro com o terceiro. 
o	o terceiro elevado ao cubo. 
*/
int main(){

int num1;
int num2;
float num3;
float res1; 
float res2; 
float res3;

printf("Digite o primeiro numero (inteiro): ");
scanf("%i", &num1);

res1 = (num1*2) * (num2/2);

printf("Digite o segundo numero (inteiro): ");
scanf("%i", &num2);

res2 = (num1*3) + res3;

printf("Digite o terceiro numero (real): ");
scanf("%f", &num3);

res3 = pow (num3, 3);

printf("|Resultado 1: %.1i\n|Resultado 2: %.1i \n|Resultado 3: %.1f \n", res1, res2, res3);

return 0;
}