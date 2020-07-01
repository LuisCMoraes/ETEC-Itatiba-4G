/*3º Exercício resolvido sobre switch em C

Escreva um programa utilizando o comando switch que 
imprima um mês de acordo com o número digitado pelo usuário.
**/

#include<stdio.h> 
#include<locale.h>

/* Arquivo de cabeçalho que contém a declaração da função
setlocale que nos permite mostrar na tela, os caracteres da 
língua Portuguesa como por exemplo ç , á, ã */

int main(){ 
  int num;
  setlocale(LC_ALL,"portuguese");

printf("\n \t Digite um número:");
scanf("%d",&num); /*o num digitado vai ser guardado na memória*/

switch (num){
       case 1: /*caso digite 1, o conteúdo de printf , Janeiro vai ser mostrado na tela */
         printf("\n Janeiro\n"); 
       break;

       case 2: 
         printf("\n Fevereiro\n"); 
       break;

       case 3:  /*caso digite 3, o conteúdo de printf , Março vai ser mostrado na tela */
         printf("\n Março\n"); 
       break;
     
       case 4: 
         printf("\n Abril\n"); 
       break;

       case 5: 
         printf("\n Maio\n"); 
       break;

       case 6: 
         printf("\n Junho\n"); 
       break;

       case 7: 
         printf("\n Julho\n"); 
       break;

       case 8: 
         printf("\n Agosto\n"); 
       break;

       case 9: 
         printf("\n Setembro\n"); 
       break;

       case 10: 
         printf("\n Outubro\n"); 
       break;

       case 11: 
         printf("\n Novembro\n"); 
       break;

       case 12: 
         printf("\n Dezembro\n"); 
       break;

       default:
          printf("\n Inválido : Digite números entre 1 e 12"); 
     }
  return 0; 
}