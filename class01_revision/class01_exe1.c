/*
@file class01_exe01.c
@author Gustavo Tamiao
@date 22 06 2021
@brief Resolução do exercício 1 da aula 01
Enunciado: Exerc´ıcio 1. [Ponteiros] Um ponteiro pode ser usado para dizer a uma fun¸c˜ao onde ela deve depositar
o resultado de seus c´alculos. Escreva uma fun¸c˜ao que converta uma quantidade de minutos na nota¸c˜ao
horas/minutos. A fun¸c˜ao recebe como parˆametro:
• um n´umero inteiro (totalMinutos); e
• os endere¸cos de duas vari´aveis inteiras, horas e minutos.
A fun¸c˜ao deve ent˜ao atribuir valores `as vari´aveis passadas por referˆencia, de modo que os valores atribu´ıdos
respeitem as seguintes condi¸c˜oes:
minutos < 60
60 ∗ horas + minutos = totalMinutos
Escreva tamb´em a fun¸c˜ao principal (main) que use a fun¸c˜ao desenvolvida.
*/

#include <stdio.h>
#include <stdlib.h>

//funcao que converte um horario no formato hh:mm para quantidade de minutos
void convertHora(int* totalMinuto, int* hora, int* minuto){
  *totalMinuto = *hora*60 + *minuto;
}//convertHora

int main(){
  //declarar variaveis
  int totalMinutos, horas, minutos;

  //receber dados
  printf("A seguir voce digitara um horario para saber a quantidade de minutos\n");
  printf("Digite as horas: ");
  scanf("%d",&horas);
  printf("Digite os minutos: ");
  scanf("%d",&minutos);
  //condicao para que minutos seja menor que 60
  while (minutos>=60)
  {
    printf("Digite um valor valido para a quantidade de minutos: ");
    scanf("%d",&minutos);
  }//while

  convertHora(&totalMinutos,&horas,&minutos);//chama a funcao
  printf("O horario informado possui %d minutos", totalMinutos);
  

return 0;
}//main