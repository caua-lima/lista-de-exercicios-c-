#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float salario;
	
	printf("Digite seu salário atual: ");
	scanf("%f", &salario);
	
	float new_salary = salario + (salario * 0.25);

	
	printf("Seu salário com reajuste de 25%% será de R$ %.2f.", new_salary);
	
	return 0;
}
