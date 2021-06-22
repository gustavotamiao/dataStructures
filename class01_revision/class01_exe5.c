/*
@file class01_exe05.c
@author Gustavo Tamiao
@date 22 06 2021
@brief Resolução do exercício 5 da aula 01
Enunciado: Exercıcio 5. [Structs, Ponteiros] Defina um tipo abstrato de dados que ira representar bandas de musica.
Essa estrutura deve ter
o nome da banda, que
tipo de musica ela toca, o
numero de integrantes, e em que
posicao do ranking essa banda esta dentre as suas 5 bandas favoritas.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void preencheBanda();
void mostraBanda();
void menu();
void ranking();
void genero();
void nomebanda();

typedef struct{
  char nome[30];
  char genero[10];
  int numero_integrantes;
  int ranking;
}Bandas;

Bandas vetBandas[4];

void main(void){
  menu();
}//main

void ranking(){
  int ranking_teclado=0;
  int i=0;
  printf("\n Digite um numero do ranking de 1 a 5: \n");
  scanf("%d", &ranking_teclado);
  for(i=0;i<5;i++){
    if(vetBandas[i].ranking == ranking_teclado){
      printf("\n");
      printf("Registro %d\n", i+1);
      printf("Nome: %s\n", vetBandas[i].nome);
      printf("Genero: %s\n", vetBandas[i].genero);
      printf("Numero de integrantes: %d\n", vetBandas[i].numero_integrantes);
      printf("Ranking: %d\n", vetBandas[i].ranking);
      printf("\n");
    }//if
  }//for
}//ranking

void genero(){
  char genero[10];
  int i=0;
  printf("\n Digite um genero musical: \n"); scanf("%s", &genero);
  for(i=0;i<5;i++){
    if(strcmp(vetBandas[i].genero, genero)==0){
      printf("\n");
      printf("Registro %d\n", i+1);
      printf("Nome: %s\n", vetBandas[i].nome);
      printf("Genero: %s\n", vetBandas[i].genero);
      printf("Numero de integrantes: %d\n", vetBandas[i].numero_integrantes);
      printf("Ranking: %d\n", vetBandas[i].ranking);
      printf("\n");
    }//if
  }//for
}//genero

void nomebanda(){
  char nomebanda[10];
  int i=0;
  int indicador=0;
  printf("\n Digite o nome de uma banda que queira consultar: \n"); scanf("%s", &nomebanda);
  for(i=0;i<5;i++){
    if(strcmp(vetBandas[i].nome, nomebanda)==0){
      printf("Essa banda esta entre suas favoritas!!!\n");
      indicador=1;
    }//if
  }//for
    if(indicador==0){
      printf("Essa banda nao esta entre suas favoritas :(\n");
    }//if
}//nomebanda

void preencheBanda(){
  int x=0;
  for(x=0;x<5;x++){
    system("cls");
    printf("Registro %d\n", x+1);
    printf("Nome: ");
    scanf("%s", &vetBandas[x].nome);
    printf("Genero: ");
    scanf("%s", &vetBandas[x].genero);
    printf("Numero de integrantes: ");
    scanf("%d", &vetBandas[x].numero_integrantes);
    printf("Ranking: ");
    scanf("%d", &vetBandas[x].ranking);
    printf("\n");
  }//for
}//preencheBanda

void mostraBanda(){
  int x=0;
  for(x=0;x<5;x++){
    printf("\n");
    printf("Registro %d\n", x+1);
    printf("Nome: %s\n", vetBandas[x].nome);
    printf("Genero: %s\n", vetBandas[x].genero);
    printf("Numero de integrantes: %d\n", vetBandas[x].numero_integrantes);
    printf("Ranking: %d\n", vetBandas[x].ranking);
    printf("\n");
  }//for
}//mostraBanda

void menu(){
  int escolha=0;
  do{
    printf("\n ------------- MENU ------------- ");
    printf("\n 1- INSERIR BANDAS");
    printf("\n 2- MOSTRAR BANDAS");
    printf("\n 3- BUSCA POR RANKING");
    printf("\n 4- BUSCA POR GENERO");
    printf("\n 5- BUSCA POR NOME");
    printf("\n 0- SAIR\n\n");
    scanf("%d", &escolha);
    switch(escolha){
      case 1: preencheBanda();
        break;
      case 2: mostraBanda();
        break;
      case 3: ranking();
        break;
      case 4: genero();
        break;
      case 5: nomebanda();
        break;
      }//switch
  }while(escolha!=0);
}//menu
