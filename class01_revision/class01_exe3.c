/*
@file class01_exe03.c
@author Gustavo Tamiao
@date 22 06 2021
@brief Resolução do exercício 3 da aula 01
Enunciado: Exercıcio 3. [Recursao] Escreva uma funcao recursiva
para calcular o valor de um numero inteiro de base
x elevada a um expoente inteiro y.
*/

#include <stdio.h>
#include <stdlib.h>

//funcao recursiva que retorna o calculo da potencia
int pow(int base, int expoente){
    if(expoente == 0){//caso base
      return 1;
    }else{// caso recursivo
      return base * pow(base, expoente-1);
    }//else
}//pow
 
int main(){
    //declaracao de variaveis
    int potencia, x, y;

    //receber a base x
    printf("Digite o valor da base x: ");
    scanf("%d", &x);


    //receber a base y
    printf("Digite o valor da base y: ");
    scanf("%d", &y);

    //chama a funcao recursiva
    potencia = pow(x, y);

    printf("A potencia e %i\n", potencia);

    return 0;
}//main
 
