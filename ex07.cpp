#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int conta;
	float saldo, debito, credito;
	
	printf("Digite o n�mero da sua conta: ");
	scanf("%i", &conta);
	printf("Digite seu saldo: ");
	scanf("%f", &saldo);
	printf("Quanto passou no D�bito: ");
	scanf("%f", &debito);
	printf("Digite seu cr�dito: ");
	scanf("%f", &credito);
	
	float saldo_atual = saldo - debito + credito;
	
	if (saldo_atual >= 0){
		printf("Seu saldo atual � positivo. Saldo atual = R$%.2f", saldo_atual);
	} else{
		printf("Seu saldo atual � Negativo. Saldo atual = R$%.2f", saldo_atual);
	}
}
