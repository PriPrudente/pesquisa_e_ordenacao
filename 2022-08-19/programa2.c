#include<stdio.h>  // está lib serve para printf(), scanf()
#include<stdlib.h> // está lib serve para system("pause")
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	//Tipos de variáveis: int, float, double, char, bool
	//int-%d, float-%f, double-%lf, char-%c
	//declarar as variáveis
	double cotacao_dolar, qtd_dolar, qtd_reais;
	
	printf("Digite o valor da cotação: R$ ");
	scanf("%lf",&cotacao_dolar);
	
	printf("Digite a quantidade de dólar: US$ ");
	scanf("%lf",&qtd_dolar);
	
	qtd_reais = cotacao_dolar * qtd_dolar;
	
	printf("Você tem R$ %.2lf",qtd_reais);
	printf("\n\n");
	system("pause");
}	
