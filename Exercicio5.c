#include <stdio.h>
/*5. Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês. */
int main(){

float valorHora;
int horasTrabalhadas;
float salario;

printf("Digite o quanto voce ganha por hora: ");
scanf("%f", &valorHora);

printf("Digite o numero de horas trabalhadas: ");
scanf("%i", &horasTrabalhadas);

salario= valorHora*horasTrabalhadas;

printf("Seu salario e %.1f",salario);
return 0;

}