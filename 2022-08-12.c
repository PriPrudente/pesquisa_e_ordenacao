#include<stdio.h>  //scanf(), printf()
#include<stdlib.h> //system("pause")
#include<locale.h>

main(){
	int ano_atual, ano_nasc, idade;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o ano atual: ");
	scanf("%d",&ano_atual);//Serve para o usuario digitar um valor
	
	printf("Digite o ano de nascimento: ");
	scanf("%d",&ano_nasc);	
	
	idade = ano_atual - ano_nasc;
	
	printf("\nA idade é %d anos!\n\n",idade);
	
	system("pause");
}
