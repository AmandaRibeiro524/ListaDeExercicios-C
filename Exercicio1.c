#include <stdio.h>

/* 1. Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número]. */
int main(){
    int numero;
    
    printf("Digite um numero: ");
    scanf("%i", &numero);
    printf("O numero informado foi: %i", numero);
    return 0;
}