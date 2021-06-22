/*
@file class01_exe02.c
@author Gustavo Tamiao
@date 22 06 2021
@brief Resolução do exercício 2 da aula 01
Enunciado: xercıcio 2. [Arquivos] Faca um programa que receba do usuario um arquivo texto. Crie outro arquivo
texto de saıda contendo o texto do arquivo de entrada original, porem substituindo todas as vogais pelo
caractere ‘*’. Alem disso, mostre na tela quantas linhas esse arquivo possui. Dentro do programa faca
o controle de erros, isto e, insira comandos que mostre se os arquivos foram abertos com sucesso, e caso
contrario, imprima uma mensagem de erro encerrando o programa.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arqin, *arqout;
    char c;
    int l = 0;

    //abrir arquivo no modo leitura
    arqin = fopen("originalarq.txt", "r");
    
    //checar se o arquivo foi aberto corretamente
    if(arqin != NULL){
        printf("\nO arquivo abriu corretamente!\n");
    }else{
        printf("\nFalha ao abrir. Verifique o nome do arquivo!\n");
        exit(1);
    }//else
    printf("\n");

    //escrever arquivo com alteracoes requisitadas
    arqout = fopen("alteratedarq.txt", "w");
  
    do{
        c = getc(arqin);//substituir vogais por *
        if(c == 'A' || c == 'E'|| c == 'I'|| c == 'O'|| c == 'U' ||
           c == 'a' || c == 'e'|| c == 'i'|| c == 'o'|| c == 'u'){
            fprintf(arqout, "*");
        }//if

        //contar linhas do arquivo
        if(c == '\n'){
            l++;
        }else fprintf(arqout, "%c", c);
    }while(c != EOF);

    printf("O arquivo foi devidamente alterado e possui %d linhas \n", l);
    fclose(arqin);
    fclose(arqout);


return 0;
}//main