#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
main(){
  setlocale(LC_ALL,"Portuguese");
  //declaração de variáveis
  double ra, senha;
 
  printf("Digite o RA: ");
  scanf("%lf",&ra);
 
  printf("Digite a SENHA: ");
  scanf("%lf",&senha);
 
  if (ra==567 && senha==890){
        printf("Bem vindo a Uninove!");
  }else{
        printf("Dados incorretos!");
  }
 
  printf("\n\n");      
  system("pause");
}