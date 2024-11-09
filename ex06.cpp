#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float ht, sph;
	
	printf("Digite o total de horas trabalhadas: ");
	scanf("%f", &ht);
	printf("Digite o valor recebido por hora trabalhada: ");
	scanf("%f", &sph);
	
	float salario_base = sph * 160;
	
	if (ht > 160){
		int h_extra = ht - 160;
		float valor_extra = sph + (sph * 0.5);
		float total_extra = valor_extra * h_extra;
		float salario = salario_base + total_extra;
		printf("Você fez %i horas extras, foi acrescido R$%.2f no seu sálario, totalizando R$%.2f.", h_extra, total_extra, salario);
	}else{
		printf("Seu salário é R$%.2f", salario_base);
	}
	
	return 0;
}
