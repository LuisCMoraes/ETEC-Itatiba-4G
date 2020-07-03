/*6º Exercício resolvido - matrizes 

Some os elementos pares da matriz e escreva o resultado na tela.
*/

#include<stdio.h>
int main(){

???????????????

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){      
          ??????????????????????????        
            scanf("%d",&matriz[i][j]);        
        }
    }               
    
    /*O trecho abaixo, vai exibir os valores originais*/
    printf("\n  Valores originais da matriz\n");     
    for(i=0;i<3;i++){         
        for(j=0;j<3;j++){           
           ???????????????????       
            printf("\n");     
        }
    }     
  
  /*Abaixo, vamos verificar se o número é par para efetuarmos a soma */    
    for(i=0;i<3;i++){         
        for(j=0;j<3;j++){
            if(matriz[i][j]%2==0){
                soma_par=soma_par+matriz[i][j];
            }
        }
    } 
      
   /*Agora, vamos exibir os valores após a verificação */     
 ???????????????????????
     
   return 0; 
}
