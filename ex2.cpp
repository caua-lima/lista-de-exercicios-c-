#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int pessoas = 200;
	float salario;
	float somaSalario = 0;
	float maiorSalario = 0;
	float filhos, somaFilhos;
	
	for(int i = 1; i <= pessoas; i++){
		
		printf("%iº cidadão: ", i);
	
		printf("Qual o valor do salário? ");
		scanf("%f", &salario);
		
		printf("Quantidade de filhos: ");
		scanf("%f", &filhos);
		
		somaSalario = somaSalario + salario;
		somaFilhos = somaFilhos + filhos;
		
		if(salario > maiorSalario){
			maiorSalario = salario;
		}
	}
	
	float mediaSalario = somaSalario / pessoas;
	float mediaFilhos = somaFilhos / pessoas;
	
	printf("\nMédia salarial: R$%.2f", mediaSalario);
	printf("\nMédia de filhos: %.1f", mediaFilhos);
	printf("\nMaior salário é de R$%.2f", maiorSalario);
	
	return 0;
	
	
}
