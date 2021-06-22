/*
@file class01_exe01.c
@author Gustavo Tamiao
@date 22 06 2021
@brief Resolução do exercício 1 da aula 01
Enunciado: Exercıcio 1. [Ponteiros] Um ponteiro pode ser usado para dizer a uma funcao onde ela deve depositar
o resultado de seus calculos. Escreva uma funcao que converta uma quantidade de minutos na notacao
horas/minutos. A funcao recebe como parametro:
• um numero inteiro (totalMinutos); e
• os enderecos de duas variaveis inteiras, horas e minutos.
A funcao deve entao atribuir valores as variaveis passadas por referencia, de modo que os valores
atribuıdos respeitem as seguintes condicoes:
minutos < 60
60 ∗ horas + minutos = totalMinutos
Escreva tambem a funcao principal (main) que use a funcao desenvolvida.
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