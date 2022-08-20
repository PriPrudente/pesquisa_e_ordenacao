#include<stdio.h>
#include<stdlib.h>

main(){
    
    //int -%d, float - %f, double -%lf, char - %c
    //declaração de variáveis
    //int float double
    int numero, i, resultado;

    printf("Digite o número para tabuada: ");
    scanf("%d",&numero);

    // for(valor inicial; condição; incremento){
    // ação enquanto condição for verdadeira
    // }
    for(i=1;i<=10;i++){
        resultado = numero * i;
        printf("%d x %d = %d\n",numero,i,resultado);

    }
        
        system("pause");


}