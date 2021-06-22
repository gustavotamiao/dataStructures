/*
@file class01_exe04.c
@author Gustavo Tamiao
@date 22 06 2021
@brief Resolução do exercício 4 da aula 01
Enunciado: Exercıcio 4. [Alocacao Dinamica] Faca um programa que leia um valor N e crie dinamicamente um
vetor com essa quantidade de elementos. Em seguida, passe esse vetor para uma funcao que vai ler os
elementos desse vetor. Depois, no programa principal, imprima os valores do vetor preenchido. Alem disso,
antes de finalizar o programa, lembre-se de liberar a area de memoria alocada para armazenar os valores do
vetor.
*/

#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int *vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        vetor[i]=i;
    }//for
}//preencheVetor

int main(){
    //declaracao de variaveis
    int tamanho;
    int *vetor;

    //ler tamanho do vetor
    printf("Digite o tamanho do vetor:");
    scanf("%d", &tamanho);

    //alocar vetor
    vetor = (int*) malloc(tamanho * sizeof(int));

    //preencher vetor alocado
    preencheVetor(vetor, tamanho);

    //exibir valor
    for(int i=0; i<tamanho; i++){
    printf("Vetor[%d]: %d\n", i, vetor[i]);
    }//for

    //libera memoria
    free(vetor);

    return 0;
}//main
